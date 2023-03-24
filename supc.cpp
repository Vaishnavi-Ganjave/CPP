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
		this->arr = (int*)malloc(this->size *sizeof(int));
	}
	int& operator[](int index)
	{
		if(index >= 0 && this->size > index)
		{
			this->arr[index] = index;
		}

		else
		{

			std::cout<<"invalid index"<<std::endl;
		}
		return this->arr[index];
	}
};


int main()
{
	demo d(5);
	int i;

	for(i=0; i<5; i++)
	{
		d[i] = i;
		std::cout<< i<<std::endl;
	}

	getch();
	return 0;
}
