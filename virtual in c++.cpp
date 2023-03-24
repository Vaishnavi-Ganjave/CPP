//virtual

#include<iostream>
#include<conio.h>

class person
{
private:
        char name[10];
        int age;
public:
       person(const char*name=" ", int age = 0)
       {
           strcpy(this->name, name);
           this->age = age;
       }

      char *getname()
       {
          return this->name;
       }

      int getage()
      {
          return this->age;
      }

      virtual void display()
      {
          std::cout << "Name:" << this->name << std::endl << "age: " << this->age << std::endl;
      }
};


class employe : public person
   {
     private:
                int id;
                float salary;
     public: 
                employe(const char* name=" ", int age = 0, int id = 0, float salary = 0.0f) : person(name, age)
                {
                        this->id=id;
                        this->salary = salary;
                }

            int getid()
            {
                 return this->id;

            }

            float getsalary()
            {
                  return this->salary;
            } 


 void display()
    {
      person:: display();
             std::cout << "id: " << this->id << std::endl << "salary: " << this->salary << std::endl;
    }
};

int main()
{
      person *p = NULL;
      employe e("vaishnavi",18,101,10000.0f);
      p = &e;
      p->display();

	  getch();
     return 0;
}