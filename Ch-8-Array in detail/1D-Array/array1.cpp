#include <iostream>
using namespace std;

main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Element: ";
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << "\t";
    }
}