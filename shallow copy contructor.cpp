          //shallow copy

#include<iostream>
#include<conio.h>


class demo
{
public:
	int a;
	int b;
	int *p;

	demo(int a, int b, int c)
	{
		this ->a = a;
		this ->b = b;
		
		this ->p = (int *)malloc(sizeof(int));
		*(this ->p) = c;
	}
};

int main()
{
	demo d1(10,20,30);
	demo d2(d1);

	std:: cout<<"d1 object values: "<< d1.a << "\t" << d1.b << "\t" << *(d1.p) << std :: endl;
	std:: cout<<"d2 object values: "<< d2.a << "\t" << d2.b << "\t" << *(d2.p) << std :: endl;
	std:: cout<<"after change in object: " <<std :: endl;
	(d1.a)++;
	(d2.b)++;
	(*(d1.p))++;

	std:: cout<<"d1 object values: "<< d1.a << "\t" << d1.b << "\t" << *(d1.p) << std :: endl;
	std:: cout<<"d2 object values: "<< d2.a << "\t" << d2.b << "\t" << *(d2.p) << std :: endl;

	getch();
	return 0;
}