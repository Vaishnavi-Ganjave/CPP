//QUE. SUBSCRIPT OPERATOR
#include<iostream>
#include<conio.h>


class demo
{
public:
	int size;
	int *arr;

demo(int size)
{
	this->size = size;
    this->arr = (int*)malloc(this->size * sizeof(int));
}

	int& operator[](int index)
	{
		if(index >= 0 && index < this->size)
		{
			this -> arr[index] = index;
	
		}
		else
		{
			std::cout<< "invalid index" <<std::endl;
		}
		return this -> arr[index];
	}
};


	int main()
	{
		demo d(5);

		for(int i=0; i< 5; i++)
		{
			d[i] = i;
			std::cout<<d[i] <<std::endl;
		}
       getch();
	   return 0;
	}
