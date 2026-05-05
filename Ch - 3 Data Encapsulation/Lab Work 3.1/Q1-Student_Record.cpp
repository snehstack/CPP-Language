#include <iostream>

using namespace std;

class StudentRecord
{
private:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_college;
    string stu_email;

public:
    void setStudentRecord()
    {
        cout << "Enter student id : ";
        cin >> this->stu_id;

        cout << "Enter student name : ";
        cin >> this->stu_name;

        cout << "Enter student age : ";
        cin >> this->stu_age;

        cout << "Enter student course : ";
        cin >> this->stu_course;

        cout << "Enter student city : ";
        cin >> this->stu_city;

        cout << "Enter student college : ";
        cin >> this->stu_college;

        cout << "Enter student email : ";
        cin >> this->stu_email;

    }

    void getStudentRecord()
    {
        
        cout << "Student id\t: " << this->stu_id << endl;
        cout << "Student name\t: " << this->stu_name << endl;
        cout << "Student age\t: " << this->stu_age << endl;
        cout << "Student course\t: " << this->stu_course << endl;
        cout << "Student city\t: " << this->stu_city << endl;
        cout << "Student college\t: " << this->stu_college << endl;
        cout << "Student email\t: " << this->stu_email << endl;
    }
};