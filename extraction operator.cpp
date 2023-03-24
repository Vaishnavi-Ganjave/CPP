

//extraction operator

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
	friend std:: istream& operator>>(std::istream& in,  demo& other);

};

std:: istream& operator>>(std::istream& in ,  demo& other)
{
	in >> other.a;
	in >> other.b;
	return in;
}


int main()
{
	demo d1(10,20);
	std:: cin >> d1;


	getch();
	return 0;
}



