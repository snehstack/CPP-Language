#include <iostream>
#include "Q1-Banking_System.cpp"

int main()
{
    SavingsAccount s1(101, "Rahul", 10000, 5);

    int choice;
    double amount;

    do
    {
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Show Balance";
        cout << "\n4. Calculate Interest";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Amount: ";
                cin >> amount;
                s1.deposit(amount);
                break;

            case 2:
                cout << "Enter Amount: ";
                cin >> amount;
                s1.withdraw(amount);
                break;

            case 3:
                cout << "Balance = " << s1.getBalance() << endl;
                break;

            case 4:
                s1.calculateInterest();
                break;

            case 5:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}