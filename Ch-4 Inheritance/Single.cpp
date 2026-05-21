#include <iostream>
using namespace std;


class ABC
{
protected:
    int a;

public:
    void setABC()
    {
        cout << "Enter a : ";
        cin >> this->a;
    }

    void getABC()
    {
        cout << endl
             << "A\t: " << this->a << endl;
    }
};


class DEF : public ABC
{
private:
    int d;

public:

    void setDEF()
    {
        cout << "Enter d : ";
        cin >> this->d;
    }

    void getdef()
    {
        getABC();
        cout << endl
             << "d\t: " << this->d << endl;
        
    }

    int sum()
    {
        return a + this->d;
    }
};