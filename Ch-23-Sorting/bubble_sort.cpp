#include <iostream>
using namespace std;

void bubble_sort(int[], int);

int main()
{
    int size;

    cout << "Enter number of elements: ";
    cin >> size;

    int a[size];
    cout << endl
         << "Array Input: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl
         << "Array OutPut: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    bubble_sort(a, size);
}

void bubble_sort(int a[], int size)
{
    int pass = 1;
    while (pass <= size - 1)
    {
        for (int i = 0; i < size; i++)
        {
            if (a[i] > a[i + 1])
            {
                int swap = a[i];
                a[i] = a[i + 1];
                a[i + 1] = swap;
            }
        }
        pass++;
    }

    cout << endl
         << "Sorted Array is: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}