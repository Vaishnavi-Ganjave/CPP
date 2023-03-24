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

class child:parent
{
public:
	void gun()
	{
		std::cout<<b<<std::endl<<std::cout<<c<<std::endl;
	}
};

class donate
{
public:
	parent d;
	void fun()
	{
		std::cout<<d.c<<std::endl;
	}
};

int main()
{
	child c;
	donate d;
	c.gun();
	d.fun();
	getch();
	return 0;
}






