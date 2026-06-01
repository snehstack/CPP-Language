#include <iostream>
#include <string.h>
using namespace std;

class BankAccount
{
protected:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
   BankAccount(int accNo, string name, double bal)
    {
        accountNumber = accNo;
        accountHolderName = name;
        balance = bal;
    }



    void deposit(double amount)
    {
        balance += amount;
        cout << "Amount Deposited Successfully!\n";
    }

    virtual void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal Successful!\n";
        }
        else
        {
            cout << "Insufficient Balance!\n";
        }
    }

    double getBalance()
    {
        return this->balance;
    }

    void displayAccountInfo()
    {
        
        cout << "Account Number     \t:" << this->accountNumber << endl;
        cout << "Account Holder Name\t:" << this->accountHolderName << endl;
        cout << "Balance            \t:" << this->balance << endl;
    }
};

class SavingsAccount : public BankAccount
{
    double interestRate;

public:
    SavingsAccount(int accNo, string name, double bal, double rate) : BankAccount(accNo, name, bal)
    {
        interestRate = rate;
    }

    void calculateInterest()
    {
        cout << "Interest: " << getBalance() * interestRate / 100 << endl;
    }
};


class CheckingAccount : public BankAccount
{
    double overdraftLimit;

public:
    CheckingAccount(int accNo, string name, double bal, double limit) : BankAccount(accNo, name, bal)
    {
        overdraftLimit = limit;
    }

    void displayAccountInfo()
    {
        BankAccount::displayAccountInfo();
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};


class FixedDepositAccount : public BankAccount
{
    int term;

public:
    FixedDepositAccount(int accNo, string name, double bal, int t) : BankAccount(accNo, name, bal)
    {
        term = t;
    }

    void calculateInterest()
    {
        cout << "FD Interest: " << getBalance() * 7.5 * term / 1200 << endl;
    }
};
