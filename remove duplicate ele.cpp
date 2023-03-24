/*
Que 6. write c++ program to remove duplicate elements from given array.
Owner: Vaishnavi Ganjave
Batch: PPA9
*/

//solution:


#include<iostream>
#include<conio.h>
int main()
{

	int i,j, temp,flag=0;
	int n, a[10];
	std::cout<<"enter how many elements you want ";
	std::cin>>n;
	std::cout<<"enter element:";
	for(i=0; i<n; i++)
	{
		std::cin>>a[i];
	}
	for(i=0; i<n; i++)
	{
		for(j= i+1; j<=n; j++)
		{
			if(a[i] == a[j])
			{
				temp = i;
				flag = 1;
				break;
			}
		}
	}
	std::cout<<" duplicate array elements are: " << a[temp]<<std::endl;
	if(flag == 1)
	{
		for(i=temp; i<n; i++)
		{
			a[i] = a[i+1];
		}
		std::cout <<"array is:  " <<std::endl;

	for(i=0; i<n-1; i++)
		{
		std::cout<< a[i] <<std::endl;
	    }
}
	getch();
	return 0;
}
