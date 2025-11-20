#include <iostream>
using namespace std;

main()
{
    // Negative elements in 1D Array

    int size;

    cout << "Enter the array size: ";
    cin >> size;

    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] : ";
        cin >> a[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            cout << a[i] << "\t";
        }
    }
}