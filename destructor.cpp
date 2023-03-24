

          //destructor

#include<iostream>
#include<conio.h>

class demo
{
public:
	int a;
	int b;
	int c;
	int *p;
	demo(int a, int b, int c)
	{
		this ->a = a;
		this ->b = b;
		this->p= (int*)malloc(sizeof(int));
		*(this->p) = c;
	}
	demo()
	{

	}

	demo& operator = (const demo &other)
	{
		this->a = other.a;
		this->b =other. b;
		this->p= (int*)malloc(sizeof(int));
		*(this->p) = *(other.p);
		return *this;
	}

	~demo()
	{
		free(p);
	}
};

int main()
{
	demo d1(10,20,30);
	demo d2;
	d2 = d1;
	std::cout<<d1.a<<"\t"<<d1.b<<"\t"<<*(d1.p)<<std::endl;
	std::cout<<d2.a<<"\t"<<d2.b<<"\t"<<*(d2.p)<<std::endl;

	std::cout<< "after changes"<<std::endl;

	std::cout<<d1.a<<"\t"<<d1.b<<"\t"<<*(d1.p)<<std::endl;
	std::cout<<d2.a<<"\t"<<d2.b<<"\t"<<*(d2.p)<<std::endl;

	getch();
	return 0;
}