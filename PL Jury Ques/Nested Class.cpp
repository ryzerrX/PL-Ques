// Write a C++ program with super outer class, outer class, inner class. Allow 
// inner class to access data members of super outer class, outer class and inner class (Q6)

#include<iostream>
using namespace std;

class SuperOuterClass
{
    public :
    int superOuterData = 20;

    class OuterClass
    {
        public :
        int outerData = 30;

        class InnerClass
        {
            public :
            int innerData = 50;

            void accessData(SuperOuterClass *superOuterClassObj, OuterClass *outerClassObj)
            {
                cout<<"Super Outer Class Data : "<< superOuterClassObj->superOuterData <<endl;
                cout<<"Outer Class Data : "<< outerClassObj->outerData <<endl;
                cout<<"Inner Class Data : "<< innerData <<endl;
            }
        };
    };
};

int main()
{
    SuperOuterClass superOuterClass;
    SuperOuterClass :: OuterClass outerClass;
    SuperOuterClass :: OuterClass :: InnerClass innerClassObj;

    innerClassObj.accessData(&superOuterClass, &outerClass);

    return 0;

}