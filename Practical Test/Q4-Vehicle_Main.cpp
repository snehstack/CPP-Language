#include <iostream>
#include "Q4-Vehicle.cpp"


int main()
{
    Car c;
    Bike b;

    cout << "Enter Car Details\n";
    c.setData();

    cout << "\nEnter Bike Details\n";
    b.setData();

    Vehicle* v[2];
    v[0] = &c;
    v[1] = &b;

    cout << "\n=== POLYMORPHISM OUTPUT ===";

    for(int i = 0; i < 2; i++)
    {
        v[i]->displayDetails();
    }

}