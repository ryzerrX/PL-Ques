// Write a C++ program to divide two numbers, throw an exception when the divisor is zero (Q10)

#include<iostream>
using namespace std;

void divide(int a, int b)
{
    try
    {
        if(b == 0)
        {
            throw b;
        }
        else
        {
            cout<<a/b<<endl;
        }
    }
    catch(int b)
    {
        cout<<"cannot divde with "<<b<<endl;
    }
    
}

int main()
{
    divide(4,2);
    divide(4,0);
    divide(4,3);  // need to use float for this to work

    return 0;
}