#include<iostream>
#include<conio.h>


class demo
{
public:

	demo& fun()
	{
		std::cout<< "fun()" <<std::endl;
		return *this;
}

	demo& gun()
	{
		std::cout<< "gun()" <<std::endl;
		return *this;
    }

	void run()
	{
		std::cout<< "run()" <<std::endl;
	}
};

int main()
{
	demo d1;
	d1.fun().gun().run();

	getch();
	return 0;
}

