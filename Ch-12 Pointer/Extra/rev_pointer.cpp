#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;

    int arr[size];
    int *ptr = arr;

    cout << endl
         << "Input array elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> *(ptr + i);
    }

    cout << endl
         << "Reversed array elements: " << endl;
    for (int i = size - 1; i >= 0; i--)
    {
        cout << *(ptr + i);
        if (i != 0)
            cout << ", ";
    }

    return 0;
}