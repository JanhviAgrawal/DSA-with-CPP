#include <iostream>
#include <string.h>
using namespace std;

class Hotel
{
private:
    int hotel_id;
    char hotel_name[20];
    char hotel_rating[20];
    int hotel_staff_quantity;
    int hotel_room_quantity;

public:
    // Static Attributes
    static char hotel_type[20];
    static char hotel_location[20];
    static int hotel_establish_year;

    // Setter
    void setHotelData()
    {
        cout << endl
             << "Enter Hotel id: ";
        cin >> this->hotel_id;

        fflush(stdin);
        cout << "Enter Hotel name: ";
        gets(this->hotel_name);

        fflush(stdin);
        cout << "Enter Hotel Rating: ";
        gets(this->hotel_rating);

        cout << "Enter Hotel Staff Quantity: ";
        cin >> this->hotel_staff_quantity;

        cout << "Enter Hotel Room Quantity: ";
        cin >> this->hotel_room_quantity;
    }

    // Getter
    void getHotelData()
    {
        cout << endl
             << "Hotel Id: " << this->hotel_id << endl;
        cout << "Hotel Name: " << this->hotel_name << endl;
        cout << "Hotel Rating: " << this->hotel_rating << endl;
        cout << "Hotel Staff Quantity: " << this->hotel_staff_quantity << endl;
        cout << "Hotel Room Quantity: " << this->hotel_room_quantity << endl;
    }

    static void displayData()
    {
        cout << "Hotel Type: " << hotel_type << endl;
        cout << "Hotel Location: " << hotel_location << endl;
        cout << "Hotel establish year: " << hotel_establish_year << endl;
    }
};

char Hotel::hotel_type[20] = "Hotel";
char Hotel::hotel_location[20] = "Gujarat";
int Hotel::hotel_establish_year = 1968;