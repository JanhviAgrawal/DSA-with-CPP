#include <iostream>
#include <string.h>
using namespace std;

class Car
{
private:
    int id;
    char name[20];
    char color[20];
    double price;
    int size;

public:
    // Setter
    void setCarData()
    {
        cout << "Enter Your Car id: ";
        cin >> this->id;
        fflush(stdin);
        cout << "Enter Car Name: ";
        gets(this->name);
        cout << "Enter Car color: ";
        cin >> this->color;
        cout << "Enter Car price: ";
        cin >> this->price;
    }

    // Getter
    void getCarData()
    {
        cout << endl
             << "Car id: " << this->id << endl;
        cout << "Car Name: " << this->name << endl;
        cout << "Car Color: " << this->color << endl;
        cout << "Car Price: " << this->price << endl;
    }

    // sum of prices
    void sumOFPrice(int size, Car cars[])
    {
        double sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += cars[i].price;
        }
        cout << endl
             << "Car price total: " << sum << endl;
    }
};