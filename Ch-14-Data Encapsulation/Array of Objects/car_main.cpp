#include <iostream>
#include "Car.cpp"
using namespace std;

int main()
{
    int size;

    cout << "Enter Number of Cars: ";
    cin >> size;

    Car cars[size];

    for (int i = 0; i < size; i++)
    {
        cout << endl
             << "Car No. " << i + 1 << endl;
        cars[i].setCarData();
    }

    for (int i = 0; i < size; i++)
    {
        cars[i].getCarData();
    }

    cars[0].sumOFPrice(size, cars);
}