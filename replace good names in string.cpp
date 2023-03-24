/* Q9. write a program to replacegood name in mail.
Owner: Ganjave Vaishnavi
Batch: PPA9
*/

//solution:
#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int i=0,j=0;
	int count=0;
	char gn[20]={'h','e','l','l','o',  'g','o','o','d','n','a','m','e'};


	printf("enter name:  ");
	//gets(str);
	fgets(str, sizeof(str),stdin);
	printf("enter input string: ");
	

	for(i=0; i!=50; i++)
	{
		if(i>=20)
		{
			//printf("%c",gn[i]);
			gn[i]=str[i];
			j++;
		}
	}
	for(i=0; gn[i]!='\0'; i++)
	{
		
			printf("%c",gn[i]);
	
	}
	getch();
}


