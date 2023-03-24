             //virtual base class

#include<iostream>
#include<conio.h>

class power
{
public:
	power(int power)
	{
		std::cout<<"power: "<< power <<std::endl;
	}
};

class scanner: virtual public power
{
public:
	scanner(int power, int scanner) : power(power)
	{
		std::cout<<"scanner: "<< scanner <<std::endl;
	}
};

class printer: virtual public power
{
public:
	printer(int power, int printer) : power(power)
	{
		std::cout<<"printer: "<< printer <<std::endl;
	}
};

class xerox: public scanner, public printer
{
public:
	xerox(int power, int scanner, int printer): power(power),scanner(power,scanner), printer(power, printer)
	{
		//std::cout<<"xerox: "<< xerox <<std::endl;
	}
};

int main()
{

	xerox (1,2,3);
	

	getch();
	return 0;
}