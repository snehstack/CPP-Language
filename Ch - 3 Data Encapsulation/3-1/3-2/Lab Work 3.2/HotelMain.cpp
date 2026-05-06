#include <iostream>
#include "Q1-Hotel.cpp"

int main()
{
    int size;

    cout << "Enter number of Hotels : ";
    cin >> size;

    Hotel hotel[size];

    cout << "Hotel Data Input";

    for (int i = 0; i < size; i++)
    {
        hotel[i].setHotelData();
    }

    for (int i = 0; i < size; i++)
    {
        hotel[i].getHotelData();
    }

    return 0;
}