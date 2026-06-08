#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string ownerName;
    double balance;

public:
    void setAccount()
    {
        cout << "Enter Account Number : ";
        cin >> accountNumber;

        cout << "Enter Owner Name : ";
        cin >> ownerName;

        cout << "Enter Initial Balance : ";
        cin >> balance;
    }

    void credit(double amount)
    {
        balance += amount;
        cout << "Amount Credited Successfully!" << endl;
    }

    void debit(double amount)
    {
        if(amount <= balance)
        {
            balance -= amount;
            cout << "Amount Debited Successfully!" << endl;
        }
        else
    
            cout << "Insufficient Balance!" << endl;
        
    }

    void displayBalance()
    {
        cout << "\nAccount Number : " << accountNumber << endl;
        cout << "Owner Name     : " << ownerName << endl;
        cout << "Balance        : " << balance << endl;
    }
};