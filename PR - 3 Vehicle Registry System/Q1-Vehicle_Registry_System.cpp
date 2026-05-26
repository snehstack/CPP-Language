#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    int vehicleID;
    char manufacturer[25];
    char model[25];
    int year;

public:
    static int totalVehicles;

    Vehicle()
    {
        totalVehicles++;
    }

    ~Vehicle()
    {
        totalVehicles--;
    }

    void setVehicle()
    {
        cout << "Enter Vehicle ID : ";
        cin >> this->vehicleID;

        fflush(stdin);
        cout << "Enter Manufacturer : ";
        gets(this->manufacturer);

        cout << "Enter Model : ";
        gets(this->model);

        cout << "Enter Year : ";
        cin >> this->year;
    }

    void getVehicle()
    {
        cout << "Vehicle Details : " << endl;
        cout << "Venhicle ID  : " << this->vehicleID << endl;
        cout << "Manufacturer : " << this->manufacturer << endl;
        cout << "Model        : " << this->model << endl;
        cout << "Year         : " << this->year << endl;
    }

    int getVehicleID()
    {
        return this->vehicleID;
    }

    static int getVehicleCount()
    {
        return totalVehicles;
    }
};

int Vehicle::totalVehicles = 0;


class Car : public Vehicle
{
protected:
    char fuelType[25];

public:
    void setCar()
    {
        setVehicle();
        fflush(stdin);

        cout << "Enter Fuel Type : ";
        gets(this->fuelType);
    }

    void getCar()
    {
        getVehicle();
        cout << "Fuel Type\t: " << this->fuelType << endl;
    }
};


class ElectricCar : public Car
{
protected:
    int batteryCapacity;

public:
    void setElectricCar()
    {
        setCar();

        cout << "Enter Battery Capacity : ";
        cin >> this->batteryCapacity;
    }

    void getElectricCar()
    {
        getCar();

        cout << "Battery Capacity : " << this->batteryCapacity << " kWh" << endl;
    }
};


class Aircraft
{
protected:
    int flightRange;

public:
    void setAircraft()
    {
        cout << "Enter Flight Range : ";
        cin >> this->flightRange;
    }

    void getAircraft()
    {
        cout << "Flight Range : " << this->flightRange << " km" << endl;
    }
};


class FlyingCar : public Car, public Aircraft
{
public:
    void setFlyingCar()
    {
        setCar();
        setAircraft();
    }

    void getFlyingCar()
    {
        getCar();
        getAircraft();
    }
};


class SportsCar : public ElectricCar
{
private:
    int topSpeed;

public:
    void setSportsCar()
    {
        setElectricCar();

        cout << "Enter Top Speed : ";
        cin >> this->topSpeed;
    }

    void getSportsCar()
    {
        getElectricCar();

        cout << "Top Speed : " << this->topSpeed << " km/h" << endl;
    }
};


class Sedan : public Car
{
public:
    void setSedan()
    {
        setCar();
    }

    void getSedan()
    {
        getCar();
    }
};


class SUV : public Car
{
public:
    void setSUV()
    {
        setCar();
    }

    void getSUV()
    {
        getCar();
    }
};


class VehicleRegistry
{
private:
    Car c[25];
    ElectricCar ec[25];

    int carCount;
    int electricCount;

public:
    VehicleRegistry()
    {
        carCount = 0;
        electricCount = 0;
    }

    void addCar()
    {
        c[carCount].setCar();

        carCount++;

        cout << endl
             << "Car Added Successfully..."
             << endl;
    }

    void addElectricCar()
    {
        ec[electricCount].setElectricCar();

        electricCount++;

        cout << endl
             << "Electric Car Added Successfully..."
             << endl;
    }

    void getVehicles()
    {
        int i;

        cout << endl
             << "===== Car Details ====="
             << endl;

        for (i = 0; i < carCount; i++)
        {
            c[i].getCar();
        }

        cout << endl
             << "===== Electric Car Details ====="
             << endl;

        for (i = 0; i < electricCount; i++)
        {
            ec[i].getElectricCar();
        }
    }

    void searchVehicle()
    {
        int id;
        int i;
        int found = 0;

        cout << endl
             << "Enter Vehicle ID : ";

        cin >> id;

        for (i = 0; i < carCount; i++)
        {
            if (c[i].getVehicleID() == id)
            {
                c[i].getCar();

                found = 1;
            }
        }

        for (i = 0; i < electricCount; i++)
        {
            if (ec[i].getVehicleID() == id)
            {
                ec[i].getElectricCar();

                found = 1;
            }
        }

        if (found == 0)
        {
            cout << endl
                 << "Vehicle Not Found..."
                 << endl;
        }
    }
};    