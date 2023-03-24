/* 
Que 4. write a c++ program to illustrate  local constant.
Owner: Vaishnavi Ganjave
Batch: PPA9
*/

//solution:


#include<iostream>
#include<conio.h>
int main()
{
	const int a=10;
	int *p = const_cast<int*>(&a);
	(*p)++;

	std::cout << a << std:: endl << *p << std ::endl;
	return 0;
	getch();
}





/* 
Que 4. write a c++ program to illustrate global constant .
Owner: Vaishnavi Ganjave
Batch: PPA9
*/

//solution:



#include<iostream>
#include<conio.h>
const int a=10;
int main()
{
	
	int *p = const_cast<int*>(&a);
	(*p)++;

	std::cout << a << std:: endl << *p << std ::endl;
	return 0;
	getch();
}