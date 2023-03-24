//stl 

#include<iostream>
#include<conio.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>


//2D vector
int main()
{
	std::vector<std::vector<int>> v(3,std::vector<int>(3,-1));
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			std::cout<< v[i][j] << "\t";
		}
		std::cout<< std::endl;
	}
	getch();
	return 0;
};

/*
//vector
class Demo
{
public:
	int a;
	int b;
	int c;
	Demo() 
	{
		std::cout<<"defalut constructor"<<std::endl;
	}
	Demo(int a,int b,int c): a(a), b(b), c(c)
	{
		std::cout<<"parameterized constructor"<<std::endl;
	}
	Demo(const Demo &other)
	{
		std::cout<<"copy constructor"<<std::endl;
	}
};

int main()
{
	std::vector<Demo> v;
	v.reserve(3);

	v.emplace_back(10,20,30);
	v.emplace_back(100,200,300);
	v.emplace_back(1000,2000,3000);
	getch();
	return 0;
	
}      */


/*
//list
int main()
{
	std::list<int> l;
	std::list<int>::iterator itr;

	std::cout<<l.size()<<std::endl;
	l.push_back(100);
    l.push_back(20);
    l.push_back(300);
    l.push_back(40);
    l.push_back(500);

	std::cout<<l.size()<<std::endl;
	std::cout<<l.front()<<std::endl;
	std::cout<<l.back()<<std::endl;

	itr = l.begin();
	for(int i=0; i<l.size();i++)
	{
		std::cout<<*itr<<std::endl;
		itr++;
	}
	l.sort();
	itr = l.begin();
	for(int i=0; i<l.size();i++)
	{
		std::cout<<*itr<<std::endl;
		itr++;
	}

	getch();
	return 0;
	
}          */

/*
//stack
int main()
{
	std::stack<int> s;
	std::cout<<s.size()<<std::endl;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	std::cout<<s.size()<<std::endl;
	std::cout<<s.top()<<std::endl;
	s.pop();
	std::cout<<s.top()<<std::endl;

	getch();
	return 0;

}   */

/*
//queue
int main()
{
	std::queue<int> q;
	std::cout<<q.size()<<std::endl;

	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);

	std::cout<<q.size()<<std::endl;
	std::cout<<q.front()<<std::endl;
	std::cout<<q.back()<<std::endl;

	q.pop();
	std::cout<<q.front()<<std::endl;
	std::cout<<q.back()<<std::endl;


	getch();
	return 0;

}   */