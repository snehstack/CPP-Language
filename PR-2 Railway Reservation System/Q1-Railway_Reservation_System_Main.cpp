#include <iostream>
#include "Q1-Railway_Reservation_System"


int main()
{
    Train t[25];

    int total = 0;
    int choice;
    int number;
    bool found;

    do
    {
        cout << "\n====================================\n";
        cout <<       "Railway  Reservation System";
        cout << "\n====================================\n";

        cout << "1. Add New Train Record\n";
        cout << "2. Display All Train Records\n";
        cout << "3. Search Train By Number\n";
        cout << "4. Exit\n\n";

        cout << "Enter Your Choice : ";
        cin >> choice;

        cout << endl;

        switch (choice)
        {
        case 1:

            if (total >= 100)
            {
                cout << "Train storage is full!\n";
            }
            else
            {
             t[total].inputTrainDetails();
                total++;

                cout << "\nTrain Record Added Successfully!\n";  break;
            }

        case 2:

            if (total == 0)
            {
                cout << "No Train Records Found!\n";
            }
            else
            {
                for (int i = 0; i < total; i++)
                
                    t[i].displayTrainDetails(); break;
        
            }

            

        case 3:

            cout << "Enter Train Number : ";
            cin >> number;

            found = false;

            for (int i = 0; i < total; i++)
            {
                if (t[i].getTrainNumber() == number)
                {
                    t[i].displayTrainDetails();
                    found = true;
                }
            }

            if (!found)
            
                cout << "\nTrain Not Found!\n"; break;
        case 4:

            cout << "Thank You!\n";
            cout << "Exiting Program...\n"; break;

        default:

            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}