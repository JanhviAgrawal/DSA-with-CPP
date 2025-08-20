#include <iostream>
using namespace std;

main()
{
    int size, n;

    cout << "Enter the size of Array : ";
    cin >> size;

    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl
         << endl
         << "Enter the Value that you Went to sum : ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] + a[j] == n)
            {
                cout << a[i] << ", " << a[j] << endl;
            }
            // else
            // {
            //     cout << "Enter valid inputs first.. then try again...!!";
            // }
        }
    }
}