#include <iostream>
#include "Q1-Vehicle_Registry_System.cpp"

int main()
{
    VehicleRegistry v1;
    int choice;

    do
    {
        cout << endl
             << "===== VEHICLE MANAGEMENT SYSTEM ====="
             << endl;

        cout << "1. Add Car" << endl;
        cout << "2. Add Electric Car" << endl;
        cout << "3. Display Vehicles" << endl;
        cout << "4. Search Vehicle" << endl;
        cout << "5. Total Vehicles" << endl;
        cout << "0. Exit" << endl;

        cout << "Enter Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            v1.addCar();  break;

        case 2:

            v1.addElectricCar(); break;

        case 3:

            v1.getVehicles(); break;

        case 4:

            v1.searchVehicle(); break;

        case 5:

            cout << endl
                 << "Total Vehicles : "
                 << Vehicle::getVehicleCount()
                 << endl; break;

        case 0:

            cout << endl
                 << "Program Exited Successfully..."
                 << endl; break;

        default:

            cout << endl
                 << "Invalid Choice..."
                 << endl;
        }

    } while (choice != 0);

    return 0;
}