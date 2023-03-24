//QUE. FUNCTION CALL OPERATOR:
#include<iostream>
#include<conio.h>

class demo
{
public:
	int a;
	int b;
	int c;

	demo& operator()(int a, int b, int c)
	{
		std::cout << a << std:: endl << b << std:: endl << c << std:: endl;
		return *this;
	}

};



int main()
{
	demo d;
	d(10,20,30);

	 getch();
	 return 0;
}