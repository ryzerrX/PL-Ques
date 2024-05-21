// Create a Bank scenario (Q2)

#include<iostream>
using namespace std;

class Bank 
{
    private :
    int accNo;
    int bal;

    public :
    Bank(int a, int b)
    {
        accNo = a;
        bal = b;
    }

    int withdraw(int amt)
    {
        if(amt > bal)
        {
            cout<<"no balance"<<endl;
        }
        else if(amt <= 0)
        {
            cout<<"error"<<endl;
        }
        else
        {
            cout<<"amt withdrawed : "<<amt<<endl;
            bal -= amt;
        }
        return bal;
    }

    int dep(int amt)
    {
        if(amt <= 0)
        {
            cout<<"error"<<endl;
        }
        else
        {
            cout<<"amt deposited : "<<amt<<endl;
            bal += amt;
        }
        return bal;
    }

    void display()
    {
        cout<<accNo<<":"<<bal<<endl;
    }

    

    

};




int main()
{
    Bank obj1 = Bank(123,0);
    obj1.dep(100);
    obj1.withdraw(100);
    obj1.display();
    return 0;
}