// Create a class e-bill with data members as integer 'u' denoting the amount of units of 
// electricity consumed, the task is to calculate the electricity bill with the help of below charges 
// (1 to 100 units -- 5 per unit) 
// (100 to 200 units -- 10 per unit) 
// (200 to 300 units -- 15 per unit) 
// (300 to 400 units -- 20 per unit) (Q4)

#include<iostream>
using namespace std;

class Ebill
{
    private :
    int units;
    int bill;

    public :
    Ebill(int x)
    {
        units = x;
    }

    void calBill()
    {
        if (units < 0)
        {
            cout<<"error"<<endl;
        } 
        else if (units <= 100)
        {
            bill = units * 5;
        }
        else if (units <= 200)
        {
            bill = (100 * 5) + ((units - 100) * 10);
        } 
        else if (units <= 300)
        {
            bill = (100 * 5) + (100 * 10) + ((units - 200) * 15);
        } 
        else if (units <= 400)
        {
            bill = (100 * 5) + (100 * 10) + (100 * 15) + ((units - 300) * 20);
        } 
        else if (units <= 500)
        {
            cout<<"error"<<endl;
        } 
    }

    void display()
    {
        cout<<"Total bill : "<<bill<<endl;
    }

};

int main()
{
    Ebill o1(50);
    o1.calBill();
    o1.display();

    Ebill o2(150);
    o2.calBill();
    o2.display();

    Ebill o3(250);
    o3.calBill();
    o3.display();

    Ebill o4(350);
    o4.calBill();
    o4.display();

    Ebill o5(500);
    o5.calBill();
    o5.display();
}