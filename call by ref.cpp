
/*
Que: call by reference
Owner: Vaishnavi Ganajve
Batch: PPA9
*/

//solution:


#include<iostream>
#include<conio.h>

int ref(int &x)
{
	x = 30;
	return x;
}
int main()
{
	int a=10;
	ref(a);
	std:: cout << a;
	getch();
	return 0;
}

