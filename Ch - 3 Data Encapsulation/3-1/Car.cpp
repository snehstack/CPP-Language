#include <iostream>

using namespace std;

class Car
{
private:
    int car_no;
    string car_name;
    string car_model;
    double car_price;

public:
    void setCar()
    {
        cout << "Enter car Number : ";
        cin >> this->car_no;

        cout << "Enter car Name : ";
        cin >> this->car_name;

        cout << "Enter car Model : ";
        cin >> this->car_model;

        cout << "Enter car Price : ";
        cin >> this->car_price;

        this->getCar();
    }

    void getCar()
    {
        
        cout << "Car Number\t: " << this->car_no << endl;
        cout << "Car Name\t: " << this->car_name << endl;
        cout << "Car Model\t: " << this->car_model << endl;
        cout << "Car Price\t: " << this->car_price << endl;
    }
};