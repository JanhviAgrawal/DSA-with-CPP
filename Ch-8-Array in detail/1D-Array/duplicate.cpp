#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int a[size];

    cout << endl
         << "Array Input" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                for (int k = j; k < size; k++)
                {
                    a[k] = a[k + 1];
                }
                size--;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }
}