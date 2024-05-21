// Write a C++ program to overload + operator (Q8.1)

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

    Complex operator+(Complex& obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }

    void show()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};

int main()
{
    Complex c1(10,3),c2(2,10),c3;
    c3 = c1 + c2;
    c3.show();

    return 0;
}