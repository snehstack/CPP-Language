#include <iostream>
#include "Q2-Fast_Food_Cafe.cpp"

using namespace std;

int main()
{
    int n;

    cout << "Enter Number of Cafes : ";
    cin >> n;

    FastFoodCafe cafe[n];

    cout << endl
         << "Cafe Details"  << endl;

        for (int i = 0; i < n; i++)
    {
        cafe[i].display();
    }

    return 0;
}