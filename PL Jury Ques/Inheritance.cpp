// Create a class called employee. Display the salary of software developer, 
//trainer, tester, and programmer. Use inheritance. (Q5)

#include <iostream>
using namespace std;

class Employee
{
    public :

    int salary;

    
    void display()
    {
        cout << salary << endl;
    }
};

class SoftwareDev : public Employee
{
    public :
    SoftwareDev(int x)
    {
        salary = x ;
        cout<<"salary of Software Developer : ";
        
    }
};

class Trainer : public Employee
{
    public :
    Trainer(int x)
    {
        salary = x;
        cout<<"salary of Trainer : ";
        
    }

    ~Trainer()
    {
        cout<<"destroyed trainer"<<endl;
    }
};

class Tester : public Employee
{
    public :
    Tester(int x)
    {
        salary = x;
        cout<<"salary of Tester : ";
    }
};

class Programmer : public Employee
{
    public :
    Programmer(int x)
    {
        salary = x;
        cout<<"salary of Programmer : ";
    }
};

int main()
{
    SoftwareDev e1(50000);
    e1.display();

    // Trainer *p ;
    // p= (Trainer *) malloc(sizeof(Trainer));
    // p->Trainer(1000);
    // new 
    // free p; 


    //Tester e3(15000);
    //e3.display();

    //Programmer e4(30000);
    //e4.display();

}