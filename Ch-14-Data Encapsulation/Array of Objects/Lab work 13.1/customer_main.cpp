#include <iostream>
#include "Customer.cpp"
using namespace std;

int main()
{
    Customer customers[5];

    for (int i = 0; i < 2; i++)
    {
        cout << endl
             << "Customer No. " << i + 1 << endl;
        customers[i].setCustomerData();
    }
    for (int i = 0; i < 2; i++)
    {
        cout << endl
             << "Data of Customer " << i + 1 << endl;
        customers[i].getCustomerData();
    }
}