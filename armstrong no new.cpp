/*
Que 1. write a c++ program to check whether given number is armstrong or not.
Owner: Vaishnavi Ganjave
Batch: PPA9
*/


//solution:

#include<iostream>
#include<conio.h>
int main()
{
	int i, n, rem, temp, sum = 0;
	int pow, cnt=0;
	std :: cout <<"enter the number: " <<std:: endl;
	std :: cin >> n;

	temp = n;
	while(temp != 0)
	{
		temp = temp/ 10;
		cnt++;
	}
	temp = n;
	while(temp > 0)
	{
		rem = temp %10;
		pow = 1;
		for(i=0; i<cnt; i++)
		{
			pow = pow * rem;
		}
		sum = sum + pow;
		temp = temp/10;
	}
	if(n == sum)
	{
		std:: cout<< "given no is armstrong"  <<std::endl;
	}
	else
	{
		std :: cout<< "given no is not armstrong"  << std::endl;
	}
	getch();
	return 0;

}