/*
Que 5.write c++ program to print given pattern
Owner: Vaishnavi Ganjave
Batch: PPA9
*/

//solution:



#include<iostream>
#include<conio.h>
int main()
{
	int r,n;
	std::cout <<"enter no of rows: "  <<std::endl;
	std:: cin>> r;
	for(int i =1; i<=r; i++)
	{
		for(int j = 1; j<=i; j++)
		{
			std:: cout << n;
			std:: cout << " ";
			n++;
		}
		std::cout << "\n" << std::endl;
	}
	getch();
	return 0;
}

