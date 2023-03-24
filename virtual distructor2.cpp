    //virtual destructor

#include<iostream>
#include<conio.h>

class parent
{
public:
	int *p,a;
	parent()
	{
		p = (int*)malloc(sizeof(int));
	       a = 10;
	}
	virtual ~parent()
	{
		std::cout<<"i am in parent distructor"<<std::endl;
		//free(p);
	}
};

class child:public parent
{
public:
	int *q,b;
	child()
	{
		q = (int*)malloc(sizeof(int));
		b= 20;
	}
	~child()
	{
		std::cout<<"i am in child distructor"<<std::endl;
		
	}
};

int main()
{
	//child c;
	parent *p = new child();
	delete p;
          
	 getch();
     return 0;
}