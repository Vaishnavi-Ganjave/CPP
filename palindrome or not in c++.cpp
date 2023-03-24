/*
Que 3. write c++ program to check whether given string is palindrome or not.
Owner: Vaishnavi Ganjave
Batch: PPA9
*/

//solution:

#include<iostream>
#include<conio.h>

int main()
{
	char str1[20], str2[20];
	int i,j,sum=0,count=0;

	std:: cout<<"enter string to check it is palindrome or not: " ;
	std:: cin >> str1;

	for(i =0; str1[i] != '\0'; i++)
	{
		count++;
	}
	for( i = 0; str1[i] != '\0'; i++)
	{
		str2[i] = str1[i];
	}
	str2[i] = '\0';
	j = 0;

	for(i= count -1; i>= 0; i--)
	{
		if(str2[j] == str1[i])
		{
			sum++;
		}
		j++;
	}

	if(sum == j)
		{
			std:: cout<<"string is not palindrome" <<std::endl;
	    }
	else
	    {
         std:: cout<<"string is palindrome" <<std::endl;
	    }

	getch();
	return 0;
}
