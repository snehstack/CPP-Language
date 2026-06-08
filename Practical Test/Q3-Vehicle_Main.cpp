#include <iostream>
#include "Q3-Vehicle.cpp"


int main()
{
    Car c1;
    Bike b1;
    double distance;

    cout << "Enter Car Details:" << endl;
    c1.setVehicle();

    cout << "\nEnter Bike Details:" << endl;
    b1.setVehicle();

    cout << "\nEnter Distance (km) : ";
    cin >> distance;

    c1.calculateTime(distance);
    b1.calculateTime(distance);

}