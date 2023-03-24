       //mutable
      
#include<iostream>
#include<conio.h>

class demo
{
public:
	int a;
	mutable int b;
	const int c;

	demo(int a, int b): c(30)
	{this->a = a;
	this->b = b;
	std::cout<<"a= " <<a<<"b= "<<b<<"c= "<<c<<std::endl;
	}

	void fun() const
	{
		b++;
		std::cout<<"a= " <<a<<"b= "<<b<<"c= "<<c<<std::endl;
	}
};

int main()
{
	std::cout<< "object 1" <<std::endl;
	demo d(10,20);
	std::cout<< "object 2" <<std::endl;
	const demo d2(1,2);
	std::cout<< "in modification function object 1" <<std::endl;
	d.fun();
	std::cout<< "in modification function object 2" <<std::endl;
	d2.fun();

	getch();
	return 0;
}