#include<iostream>
#include<vector>
#include<conio.h>

/*
int main()
{
	std::vector<int> v;
	std::cout<<v.capacity();
	std::cout<<v.size();

     v.push_back(10);
	std::cout<<v.capacity();
	std::cout<<v.size();
	
	v.push_back(20);
	std::cout<<v.capacity();
	std::cout<<v.size();  

	v.push_back(30);
	std::cout<<v.capacity();
	std::cout<<v.size();  

	v.push_back(40);
	std::cout<<v.capacity();
	std::cout<<v.size();  

	return 0;
	getch();
}
*/


int main()
{
	//for object v1
	std::vector<int> v1(10,-1);
	std::cout<<v1.capacity();
	std::cout<<v1.size();  

	v1.push_back(20);
	std::cout<<v1.capacity();
	std::cout<<v1.size(); 

	return 0;
	getch();
}


/*
//copy v1 into v
int main()
{
	std::vector<int> v(10,-1);
	std::vector<int> v1(v);
	std::cout<<v.capacity();
	std::cout<<v.size();  

	v.push_back(11);
	std::cout<<v.capacity();
	std::cout<<v.size(); 

	for(int i=0; i<v.size(); i++)
	{
		std::cout<<v[i]<<std::endl;
	}

	return 0;
	getch();
}  */


