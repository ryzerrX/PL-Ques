// Write a C++ program to print complex no. using constructor overloading (Q3)

#include<iostream>
using namespace std;

class Complex
{
    private :
    float real;
    float img;

    public :

    Complex() 
    {
        real = 0;
        img = 0;
    }

    Complex(int x, int y) 
    {
        real = x;
        img = y;
    }

    Complex(Complex& t) 
    {
        real = t.real;
        img = t.img;
    }

    void display()
    {
        cout<<"z = "<<real<<" + "<<img<<"i"<<endl;
    }
};

int main()
{
    Complex c1;

    Complex c2(4,3);//para

    Complex c3(c2);//copy

    c1.display();
    c2.display();
    c3.display();

    return 0;

}