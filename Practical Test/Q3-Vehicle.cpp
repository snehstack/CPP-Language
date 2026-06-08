#include <iostream>
using namespace std;

class Vehicle
{
private:
    string model;
    double speed;

public:
    void setVehicle()
    {
        cout << "Enter Vehicle Model : ";
        cin >> model;

        cout << "Enter Vehicle Speed (km/h) : ";
        cin >> speed;
    }

    string getModel()
    {
        return model;
    }

    double getSpeed()
    {
        return speed;
    }
};

class Car : public Vehicle
{
public:
    void calculateTime(double distance)
    {
        double time = distance / getSpeed();

        cout << "\n--- Car Details ---" << endl;
        cout << "Model : " << getModel() << endl;
        cout << "Speed : " << getSpeed() << " km/h" << endl;
        cout << "Time Required : " << time << " hours" << endl;
    }
};

class Bike : public Vehicle
{
public:
    void calculateTime(double distance)
    {
        double time = distance / getSpeed();

        cout << "\n--- Bike Details ---" << endl;
        cout << "Model : " << getModel() << endl;
        cout << "Speed : " << getSpeed() << " km/h" << endl;
        cout << "Time Required : " << time << " hours" << endl;
    }
};
