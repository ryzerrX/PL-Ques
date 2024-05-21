// Form hybrid inheretence for following scenario :
// "Ferrari" class derived from Car and Racing Car, Car class is derived from class vehicle. (Q7)
//
// 				      Vehicle(car type)
// 				      /       
// 				     /         
//                  /           
//                 /             
//    Car(car model)	      Top Speed(speed)
//                 \             /
// 			        \           /
//                   \         /
//                    \       /
// 				    Ferrari(hybrid inheritance)

#include<iostream>
#include<string>
using namespace std;

class Vehicle
{
    public  :
    string vehicletype;

    public :
    //Vehicle(){}
    //Vehicle() : vehicletype("Unknown") {}
    Vehicle(string type)
    {
        vehicletype = type;
    }

    void VehicleTypeDisplay()
    {
    cout<<"Vehilce Type : "<<vehicletype<<endl;
    }

};

class Car : public Vehicle 
{
    public :
    string cartype;

    public :
    
    // Car() : cartype("Unknown") {}
    Car(string vtype, string ctype) : Vehicle(vtype)
    {
        //Vehicle(vtype);
        cartype = ctype;

    }

    void CarTypeDisplay()
    {
        cout<<"Car Model : "<<cartype<<endl;
    }

};

class TopSpeed //: public vehicle
{
    public :
    int topSpeed;

    //TopSpeed() : topSpeed(0) {}

    TopSpeed(int speed)
    {
        topSpeed = speed;
    }

    void DisplayTopSpeed()
    {
        cout<<"Top speed : "<<topSpeed<<"mph"<<endl;
    }

};

class Ferrari : public Car, public TopSpeed
{

    public :

    Ferrari(string vtype, string ctype, int speed) : Car(vtype, ctype), TopSpeed(speed)
    {
        //Car(vtype, ctype);
        //TopSpeed(speed);
    }

    

    void DisplayDetails()
    {
        VehicleTypeDisplay();
        CarTypeDisplay();
        DisplayTopSpeed();
    }
};

int main()
{
    Ferrari obj1("Race Car", "F40", 200);

    obj1.DisplayDetails();

    return 0;
}