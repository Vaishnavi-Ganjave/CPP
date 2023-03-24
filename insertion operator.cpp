// INSERTION OPERATOR:
#include<iostream>
#include<conio.h>


class demo
{

	int a;
	int b;
public:
	demo(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	friend std:: ostream& operator<<(std:: ostream& out, const demo& other);

};

std:: ostream& operator <<(std::ostream& out , const demo& other)
{
	out << other.a;
	out << other.b;
	return out;
}


int main()
{
	demo d1(10,20);
	std:: cout << d1;


	getch();
	return 0;
}



