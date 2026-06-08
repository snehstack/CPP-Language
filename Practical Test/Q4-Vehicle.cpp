#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string model;
    int speed;

public:
    void setData()
    {
        cout << "Enter Model : ";
        cin >> model;

        cout << "Enter Speed : ";
        cin >> speed;
    }

    virtual void displayDetails()
    {
        cout << "\nVehicle Model : " << model << endl;
        cout << "Speed : " << speed << " km/h" << endl;
    }
};

class Car : public Vehicle
{
public:
    void displayDetails() override
    {
        cout << "\n--- CAR DETAILS ---" << endl;
        cout << "Model : " << model << endl;
        cout << "Speed : " << speed << " km/h" << endl;
    }
};

class Bike : public Vehicle
{
public:
    void displayDetails() override
    {
        cout << "\n--- BIKE DETAILS ---" << endl;
        cout << "Model : " << model << endl;
        cout << "Speed : " << speed << " km/h" << endl;
    }
};
