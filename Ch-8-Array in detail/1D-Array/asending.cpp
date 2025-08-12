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
        cout << "Enter a [" << i << "] : ";
        cin >> a[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
        cout << a[i] << "\t";
    }
}