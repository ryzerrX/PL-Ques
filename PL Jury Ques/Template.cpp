// Create a template to find maximum value from given two values.
// {values can be char, int, double or float } (Q9)

#include<iostream>
using namespace std;

template<typename T>
T maximum(T a, T b)
{
    return (a>b) ? a : b ;

    // if(a>b)
    // {
    //     return a;
    // }
    // else 
    // {
    //     return b;
    // }
}

 int main()
 {
    int intmax = maximum<int>(4, 5);
    cout<<"max value = "<<intmax<<endl;

    char charmax = maximum<char>('b', 'c');
    cout<<"max value = "<<charmax<<endl;

    float floatmax = maximum<float>(2.4, 1.2);
    cout<<"max value = "<<floatmax<<endl;

    return 0;
 }