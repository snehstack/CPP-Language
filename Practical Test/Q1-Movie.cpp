#include <iostream>
using namespace std;

class Movie
{
private:
    string title;
    string genre;
    int releasedYear;

public:
    void setMovie()
    {
        cout << "Enter Movie Title : ";
        cin >> title;

        cout << "Enter Movie Genre : ";
        cin >> genre;

        cout << "Enter Released Year : ";
        cin >> releasedYear;
    }

    void getMovie()
    {
        cout << "Title\t\t: " << title << endl;
        cout << "Genre\t\t: " << genre << endl;
        cout << "Released Year\t: " << releasedYear << endl;
    }
};