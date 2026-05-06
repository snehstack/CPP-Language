#include <iostream>
using namespace std;

class Hotel
{
private:
    int hotel_id;
    string hotel_name;
    string hotel_type;
    int hotel_rating;
    string hotel_location;
    double hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;

public:
    void setHotelData()
    {
        cout << endl;

        cout << "Enter Hotel ID :";
        cin >> this->hotel_id;

        cout << "Enter Hotel Name :";
        cin >> this->hotel_name;

        cout << "Enter Hotel Type (Hotel or Motel) :";
        cin >> this->hotel_type;

        cout << "Enter Hotel Rationg (1 - 7 Star) :";
        cin >> this->hotel_rating;

        cout << "Enter Hotel Location :";
        cin >> this->hotel_location;

        cout << "Enter Hotel Establish Year :";
        cin >> this->hotel_establish_year;

        cout << "Enter Hotel Staff Quantity :";
        cin >> this->hotel_staff_quantity;

        cout << "Enter Hotel Room Quantity :";
        cin >> this->hotel_room_quantity;
    }

    void getHotelData()
    {
        
        cout << "---------------------------------------" << endl;
        cout << "       H O T E L   D E T A I L S       " << endl;
        cout << "---------------------------------------" << endl;
        cout << "HOTEL ID        \t: " << this->hotel_id << endl;
        cout << "HOTEL NAME      \t: " << this->hotel_name << endl;
        cout << "HOTEL TYPE      \t: " << this->hotel_type << endl;
        cout << "HOTEL RATING    \t: " << this->hotel_rating << " Star" << endl;
        cout << "LOCATION        \t: " << this->hotel_location << endl;
        cout << "ESTABLISH YEAR  \t: " << this->hotel_establish_year << endl;
        cout << "STAFF QUANTITY  \t: " << this->hotel_staff_quantity << endl;
        cout << "ROOM QUANTITY   \t: " << this->hotel_room_quantity << endl;
        cout << "---------------------------------------" << endl;
        cout << "---------------------------------------" << endl;
    }
};