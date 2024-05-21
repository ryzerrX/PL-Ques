// Write a C++ program to count the number of objects created (Q1)

#include<iostream>
using namespace std;

static int count ;
class Counter 
{
    public :
    //static int count;

    Counter()
    {
        count++;
    }

    int static getcount()
    {
        cout<<count;
        return count;
    }

};

//int Counter::count = 0;


int main()
{
    Counter obj1;
    Counter obj2;
    Counter obj3;

    //Counter::getcount();
    cout<<count;

    return 0;
}