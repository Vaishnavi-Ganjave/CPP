             //classes

#include<iostream>
#include<conio.h>


class parent
{
private:
	int a;
protected: 
	int b;
public:
	int c;
};

class child: parent
{
public:

	void fun()
	{
	std::cout << b << c;
	}
};

class object
{
public:
	parent d;

	void gun()
	{
	std::cout<<d.c;
	}
};


int main()
{
	child c;
	object o;
	c.fun();
	o.gun();
	getch();
	return 0;
}
