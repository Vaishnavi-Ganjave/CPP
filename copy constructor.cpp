//copy constructor



#include<iostream>
#include<conio.h>



class demo
{
public:
       int a;
       int b;


demo(int a,int b)
 {

   this->a =a;
   this->b = b;
 }
};

int main()
{
	demo d1(10,20);
	demo d2(d1);

	std:: cout<<d1.a<<std::endl <<d1.b<<std::endl;
	std:: cout<<d2.a<<std::endl <<d1.a<<std::endl;

	getch();
}

