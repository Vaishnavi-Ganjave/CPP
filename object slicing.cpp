            //object slicing 

#include<iostream>
#include<conio.h>


class A
{
public:
	double a;
};

class B
{
public:
	double b;
};

class C
{
public:
	double c;
};

class D: public A,public B, public C
{
public:
    double d;
};


int main()
{
	D objd;  
		std::cout<<sizeof(D)<<std::endl;    
	   std::cout<< &objd <<std::endl;

		A* pa = &objd;
		std::cout<< pa <<std::endl;

		B* pb = &objd;
		std::cout<< pb <<std::endl;

		C* pc = &objd;
		std::cout<< pc <<std::endl;

		D* pd = static_cast<D*>(pb);
		std::cout<< pd <<std::endl;

		getch();
		return 0;
}