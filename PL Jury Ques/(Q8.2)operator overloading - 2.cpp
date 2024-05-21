// Write a C++ program to overload + operator using friend function (Q8.2)

#include<iostream>
using namespace std;

class Complex 
{
    public :
    int real;
    int img;

    Complex(int x = 0, int y = 0) 
    {
        real = x;
        img = y;
    }

    void show()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }

    friend Complex operator+(Complex obj1, Complex obj2);
};

Complex operator+(Complex obj1, Complex obj2)
    {
        Complex temp;
        temp.real = obj1.real + obj2.real;
        temp.img = obj1.img + obj2.img;
        return temp;
    }

int main()
{
    Complex c1(10,3),c2(2,10),c3;
    c3 = c1 + c2;
    c3.show();

    return 0;
}