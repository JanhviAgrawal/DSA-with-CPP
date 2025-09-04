#include <iostream>
#include <string.h>
using namespace std;

class Cafe
{
private:
    int id;
    char name[20];
    char type[20];
    char rating[20];
    char location[20];
    int establishYear;
    int staffQuantity;

public:
    Cafe()
    {
        cout << endl
             << "Enter Cafe Data...." << endl
             << endl;
        cout << "Enter Cafe id: ";
        cin >> this->id;
        fflush(stdin);
        cout << "Enter Cafe Name: ";
        gets(this->name);
        cout << "Enter Cafe Type  (like a rooftop or normal): ";
        cin >> this->type;
        fflush(stdin);
        cout << "Enter Cafe Rating (like 1 Star, 2 Start, ..., 5 Star): ";
        gets(this->rating);
        cout << "Enter Cafe location (city name): ";
        cin >> this->location;
        cout << "Enter Cafe Establishing Year: ";
        cin >> this->establishYear;
        cout << "Enter Cafe's Staff Quantity: ";
        cin >> this->staffQuantity;
    }

    // Getter
    void getCafeData()
    {
        cout << "Cafe id: " << this->id << endl;
        cout << "Cafe Name: " << this->name << endl;
        cout << "Cafe Type: " << this->type << endl;
        cout << "Cafe Rating: " << this->rating << endl;
        cout << "Cafe Location: " << this->location << endl;
        cout << "Cafe Estabilishing Year: " << this->establishYear << endl;
        cout << "Cafe Staff Quantity: " << this->staffQuantity << endl;
    }
};

void handleCafes()
{
    int size;
    cout << "Enter number of Cafes: ";
    cin >> size;

    Cafe cafes[size];

    for (int i = 0; i < size; i++)
    {
        cout << endl
             << "Cafe " << i + 1 << endl
             << endl;
        cafes[i].getCafeData();
    }
}
