//inheritance

#include<iostream>
#include<conio.h>



class parent
{
public:
		  int a;
		  int b;
		  int c;
		  parent(int a , int b, int c)
		  {
			  this->a =a;
			  this->b= b;
			  this->c= c;
		  }
};

class child:public parent
{
public:
			 int x; 
			 int y;
			 int z;
			child(int a,int b,int c,int x, int y, int z):parent(a,b,c)
			{

              this->x =x;
			  this->y= y;
			  this->z= z;
			}
};

class grandchild: public child
{
public:
			 int p;
			 int q;
			 int r;
			 grandchild(int a, int b, int c, int x,int y, int z,int p,int q, int r):child(a,b,c,x,y,z)
			 {
			  this->p =p;
			  this->q= q;
			  this->r= r;
			 }
};


int main()
{
	grandchild c(1,2,3,4,5,6,7,8,9);
	std::cout<<c.a<<std::endl<<c.b<<std::endl<<c.c<<std::endl;
	std::cout<<c.x<<std::endl<<c.y<<std::endl<<c.z<<std::endl;
	std::cout<<c.p<<std::endl<<c.q<<std::endl<<c.r<<std::endl;

	getch();
	return 0;
}