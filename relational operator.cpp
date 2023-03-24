//RELATIONAL OPERATOR:
#include<iostream>
#include<conio.h>

class demo
{
public:
	int a;
	int b;


	demo(int a, int b)
	{
		this->a = a;
		this->b = b;
	}

	bool operator<(const demo& other)
	{
		return((this->a < other.a) && (this->b < other.b));
	
	}

};

int main()
{
	demo d1(10,20);
	demo d2(30,40);

	if(d1 < d2)
	{
		std::cout<<"object d1 id greater than d2"<<std::endl;
	}
	else
		std::cout<<"object d2 id greater than d1"<<std::endl;
    
	getch();
	return 0;
}