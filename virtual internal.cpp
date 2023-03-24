//virtual internals

#include<iostream>
#include<conio.h>

class parent
{
public:
	int a,b;

	virtual void fun()
	{
		std::cout<<" i am in virtual parent fun"<<std::endl;
	}

	virtual void gun()
	{
		std::cout<<"i am in virtual parent gun"<<std::endl;
	}

	void run()
	{
		std::cout<<"i am in nonvirtual parent run"<<std::endl;
	}
};

class child: public parent
{
public:
	void fun()
	{
		std::cout<<"i am in virtual child fun"<<std::endl;
	}
};


int main()
{
	child c;

	int* p = reinterpret_cast<int*>(&c);
	int* q = reinterpret_cast<int*>(*p);

	void  (*fp)();
	fp = (void(*)())*q;
	
	fp();

	void  (*fp1)();
	fp1 = (void(*)())*q;
	
	fp1();

	getch();
	return 0;
	
}



