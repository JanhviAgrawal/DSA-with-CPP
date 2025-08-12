#include <iostream>
using namespace std;

main()
{
    int size1, size2;

    cout << "Enter size 1: ";
    cin >> size1;
    cout << "Enter size 2: ";
    cin >> size2;

    int a[size1], b[size2];
    int merge[size1 + size2];
    cout << endl
         << "First Array input" << endl;
    for (int i = 0; i < size1; i++)
    {
        cout << "Enter a [" << i << "] : ";
        cin >> a[i];
    }

    cout << endl
         << "Second Array input" << endl;
    for (int i = 0; i < size2; i++)
    {
        cout << "Enter a [" << i << "] : ";
        cin >> b[i];
    }

    for (int i = 0; i < size1; i++)
    {
        merge[i] = a[i];
    }
    for (int i = 0; i < size2; i++)
    {
        merge[i + size1] = b[i];
    }
    for (int i = 0; i < size1 + size2; i++)
    {
        cout << merge[i] << "\t";
    }
}