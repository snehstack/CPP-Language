#include <iostream>
using namespace std;

class TimeConverter
{
private:
    int totalSec;
    int h, m, s;

public:
    void inputSeconds()
    {
        cout << "Enter seconds: ";
        cin >> totalSec;

        h = totalSec / 3600;
        m = (totalSec % 3600) / 60;
        s = totalSec % 60;
    }

    void displayTime()
    {
        cout << "Time (HH:MM:SS) = "
             << h << " : " << m << " : " << s << endl;
    }

    void inputTime()
    {
        cout << "Enter hours: ";
        cin >> h;

        cout << "Enter minutes: ";
        cin >> m;

        cout << "Enter seconds: ";
        cin >> s;
    }

    void displayTotalSeconds()
    {
        int result = (h * 3600) + (m * 60) + s;
        cout << "Total seconds = " << result << endl;
    }

    
};