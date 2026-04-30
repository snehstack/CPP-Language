#include <iostream>
using namespace std;

class Student
{
private:
    int RollNo;
    string Name;
    int Age;
    double Per;

public:
    void setStudentDetail()
    {
        

        cout << "Enter Your Roll Number : ";
        cin >> RollNo;

        cout << "Enter Your Name : ";
        cin >> Name;

        cout << "Enter Your Age : ";
        cin >> Age;

        cout << "Enter Your Persentage : ";
        cin >> Per;
    }

    void getStudentDetail()
    {
    
        cout << "Student Roll Number :" << RollNo << endl;
        cout << "Student Name :" << Name << endl;
        cout << "Student Age :" << Age << endl;
        cout << "Student Persentage :" << Per << endl;

        
    }
};