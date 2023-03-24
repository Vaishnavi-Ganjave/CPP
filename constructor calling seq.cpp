                  //constructor calling sequence

#include<iostream>
#include<conio.h>

class Parent
{
private :
	int a;
protected :
	int b;
public :
	int c;

	Parent(int a , int b, int c)
	{
		this -> a = a;
		this -> b = b;
		this -> c = c;
	}

	void display()
	{
		std :: cout << a << " a value" << std :: endl;
	}
};

class Child : public Parent
{
private :
	int p;
protected :
	int q;
public :
	int r;

	Child(int p , int q , int r , int a , int b, int c) : Parent(a , b , c)
	{
		this -> p = p;
		this -> q = q;
		this -> r = r;
	}
	void print()
	{
		display();
		std :: cout << p << " p value" << std :: endl << q << " q value" << std :: endl << r << " r value" << std :: endl << b << " b value" << std :: endl << c << " c value" << std :: endl;
	}
};

int main()
{
	Child c(10,20,30,40,50,60);
	c.print();
	getch();
	return 0;
}