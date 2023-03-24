#include<iostream>
#include<conio.h>

class employee
{
private:
	char name[20];
	int age;
	int id;
protected:
	float salary;

public:
	employee(const char*name =" ", int age = 0,int id = 0,float salary = 0.0f)
	{
		strcpy(this->name,name);
		this->age= age;
		this->id = id;
		this->salary = salary;
	}

	float getsalary()
	{
		return this->salary;
	}

	virtual float getincome()
	{
		return this->salary;
	}

	virtual void display()
	{
		std::cout<<"name: "<< this->name<<std::endl;
			std::cout<< "age: " << this->age <<std::endl;
				std::cout<<"id: " << this->id << "salary: " << this->salary << std::endl;
	}
};


class manager: public employee
{
private:
	float bonus;
public:
	manager(const char*name =" ", int age = 0,int id = 0,float salary = 0.0f,float bonus = 0) : employee(name,age,id,salary)
	{
		this->bonus = bonus;
	}

	float getsalary()
	{
		return this->salary;
	}

	float getincome()
	{
		employee:: getincome();
		return this->salary + this->bonus;
	}

	void display()
	{
		employee :: display();
		std::cout<<"bonus: "<< this->bonus <<  std::endl;
	}
};


class salesman: public employee
{
private:
	float insentive;
public:
	salesman(const char*name =" ", int age = 0,int id = 0,float salary = 0.0f,float insentive = 0) : employee(name,age,id,salary)
	{
		this->insentive = insentive;
	}

	virtual float getsalary()
	{
		return this->salary;
	}

	virtual float getincome()
	{
		employee:: getincome();
		return this->salary + this->insentive;
	}

	void display()
	{
		employee :: display();
		std::cout<<"insentive: "<< this->insentive <<  std::endl;
	}
};

float totalsalary(employee *emp[], int n)
{
	float total = 0.0f;
	int i;
	for(i=0;i<n;i++)
	{
		total = total + emp[i]->getsalary();
	}
	return total;
}

float totalincome(employee *emp[], int n)
{
	float total = 0.0f;
	int i;
	for(i=0;i<n;i++)
	{
		total = total + emp[i]->getincome();
	}
	return total;
}


int main()
{
	employee *emp[5];
	int i;
	float totalsal;
	float totalinc;

	emp[0] = new manager("vaishnavi",20,101,10000.0f,50000.0f);
	emp[1] = new employee("shreya",19,102,15000.0f);
	emp[2] = new manager("mansi",21,103,20000.0f,50000.0f);
	emp[3] = new salesman("harshada",20,104,22000.0f,40000.0f);
	emp[4] = new employee("priya",21,105,30000.0f);

	for(i=0; i<5; i++)
	{
		emp[i]->display();
		std::cout<< std::endl;
	}

	totalsal = totalsalary(emp,5);
	std::cout<<"total salary is: "<<totalsal<<std::endl;

	totalinc = totalincome(emp,5);
	std::cout<<"total income is: "<<totalinc<<std::endl;

	getch();
	return 0;
}