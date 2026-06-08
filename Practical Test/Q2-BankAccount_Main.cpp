#include <iostream>
#include "Q2-BankAccount.cpp"

using namespace std;

int main()
{
    BankAccount b1;
    double amount;

    b1.setAccount();

    cout << "\nEnter Amount to Credit : ";
    cin >> amount;
    b1.credit(amount);

    cout << "\nEnter Amount to Debit : ";
    cin >> amount;
    b1.debit(amount);

    b1.displayBalance();

}