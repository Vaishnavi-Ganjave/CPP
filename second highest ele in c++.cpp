/*
Que 2. write c++ program to find second highest element in given array.
Owner: Vaishnavi Ganjave
Batch: PPA9
*/


//solution:


#include<iostream>
#include<conio.h>
int main()
{
	int a[10], n,i,max1,max2;
	std:: cout<< "enter the size: ";
	std:: cin >> n;
	std:: cout<< "please enter array elements: " <<std::endl;
	for(i = 0; i < n; i++)
	{
		std:: cin>> a[i];
	}
	max1 = max2 = a[0];
	for(i = 1; i< n; i++)
	{
		if(a[i] > max1)
		{
			max2 = max1;
			max1 = a[i];
		}
		if(a[i] > max2 && a[i] < max1)
		{
			max2 = a[i];
		}
	}
	std:: cout<< "second maximum element is: " <<max2;
	getch();
	return 0;
}