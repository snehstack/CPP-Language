#include <iostream>
using namespace std;

int main()
{

    int first, second;

    cout << "Enter the first number : ";
    cin >> first;

    cout << "Enter the second number : ";
    cin >> second;

    cout << "The Leap Years are :" << endl;
    for (int i = first; i <= second; i++)
    {
        if (i % 4 == 0 && i % 100 != 0)
        {
            cout << i << "\t";
        }
    }


    return 0;
}