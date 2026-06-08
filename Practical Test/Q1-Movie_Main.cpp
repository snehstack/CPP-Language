#include <iostream>
#include "Q1-Movie.cpp"

using namespace std;

int main()
{
    Movie m[3];   

    cout << "Enter Movie Details:\n";

    for(int i = 0; i < 3; i++)
    {
        cout << "\nMovie " << i + 1 << endl;
        m[i].setMovie();
    }

    cout << "\n\nMovie Records:\n";

    for(int i = 0; i < 3; i++)
    {
        cout << "\nMovie " << i + 1 << endl;
        m[i].getMovie();
    }

}    