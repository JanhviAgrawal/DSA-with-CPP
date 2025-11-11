#include <iostream>
using namespace std;

int searching(int a[], int n)
{
    int search_element;
    cout << endl
         << "Enter Element to search: ";
    cin >> search_element;

    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (search_element == a[i])
        {
            index = i;
            break;
        }
    }
    return index;
}

int main()
{
    int n;
    cout << "Enter Number of Elements: ";
    cin >> n;

    int a[n];

    cout << "Enter Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }

    cout << "Array : ";
    for (int element : a)
    {
        cout << element << " ";
    }

    int index = searching(a, n);
    if (index == -1)
    {
        cout << endl
             << "Element not Found.." << endl;
    }
    else
    {
        cout << "Searched Element Index: " << index << endl;
    }
}