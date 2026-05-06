#include <iostream>

using namespace std;

class CustomerRecord
{
private:
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    int cust_mobile_number;
    float cust_simcard_validity;
    string cust_telecom_brand_name;

public:
    void setCustomerRecord()
    {
        cout << "Enter customer id : ";
        cin >> this->cust_id;

        cout << "Enter customer name : ";
        cin >> this->cust_name;

        cout << "Enter customer age : ";
        cin >> this->cust_age;

        cout << "Enter customer city : ";
        cin >> this->cust_city;

        cout << "Enter customer mobile number : ";
        cin >> this->cust_mobile_number;

        cout << "Enter customer simcard validity : ";
        cin >> this->cust_simcard_validity;

        cout << "Enter customer telecom brand name : ";
        cin >> this->cust_telecom_brand_name;

    }

    void getCustomerRecord()
    {
        
        cout << "Customer id\t: " << this->cust_id << endl;
        cout << "Customer name\t: " << this->cust_name << endl;
        cout << "Customer age\t: " << this->cust_age << endl;
        cout << "Customer city\t: " << this->cust_city << endl;
        cout << "Customer mobile number\t: " << this->cust_mobile_number << endl;
        cout << "Customer customer simcard validity\t: " << this->cust_simcard_validity << endl;
        cout << "Customer customer telecom brand name\t: " << this->cust_telecom_brand_name << endl;

    }
};