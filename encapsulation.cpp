                              //Encapsulation


#include<iostream>
#include<conio.h>



class student
{
private:
	int age;
public:
	void setage(int age)
	{
		if(age > 0)
		this -> age = age;
		else
			std::cout<< "error" << std::endl;
	}
	int getage()
	{
		return this -> age;
	}
};


class cleark
{
public:
	student abc;
	int a;
	int age;

	void fun()
	{
		a = 20;
		abc.setage(a);
		age = abc.getage();
		std::cout<<age;
	}
};


int main()
{
	cleark c;
	student s;
	c.fun();
	getch();
	return 0;
}