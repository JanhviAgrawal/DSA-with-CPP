#include <iostream>
#include "Hotel.cpp"
using namespace std;

int main()
{
    int size;

    cout << "Enter number of hotels: ";
    cin >> size;

    Hotel hotels[size];

    for (int i = 0; i < size; i++)
    {
        cout << endl
             << "Hotel No. " << i + 1 << endl;
        hotels[i].setHotelData();
    }
    for (int i = 0; i < size; i++)
    {
        cout << endl
             << "Data of Hotel " << i + 1 << endl;
        hotels[i].getHotelData();
        Hotel::displayData();
    }
}