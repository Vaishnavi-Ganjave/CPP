#include<iostream>
#include<conio.h>

class Parent
{
private :
	      int a;
public :
	      int b;

	Parent(int a , int b)
	{
		this -> a = a;
		this -> b = b;

		std :: cout << "parent values : " << a << " " << b << std :: endl;
	}
};

class Child : public Parent
{
private : 
	      int c;
public :
	      int x;

	Child(int c , int x , int a , int b) : Parent(a , b)
	{
		this -> c = c;
		this -> x = x;

		std :: cout << "child values : " << c << " " << x << std :: endl;
	}
};

class Wife
{
private :
	      int p;
public :
	      int y;

	Wife(int p , int y)
	{
		this -> p = p;
		this -> y = y;

		std :: cout << "wife values : " << p << " " << y << std :: endl;
	}
};

class Son : public Child , Wife
{
private :
	int q;
public :
	int r;

	Son(int q , int r , int c , int x , int a , int b , int p , int y) : Child(c , x , a , b) , Wife(p , y)
	{
		this -> q = q;
		this -> r = r;

		std :: cout << "son values : " << q << " " << r << std :: endl;
	}
};

int main()
{
	Son s(10 ,20 , 30 , 40 , 50 , 60 , 70 , 80);
	getch();
	return 0;
}