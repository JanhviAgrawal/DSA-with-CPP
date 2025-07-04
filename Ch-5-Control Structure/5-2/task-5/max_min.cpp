#include <iostream>
using namespace std;

main()
{
    // minimum and maximum number

    int a, b;
    cout << "Enter First Number: ";
    cin >> a;

    cout << "Enter Second Number: ";
    cin >> b;

    if (a > b)
    {
        cout << "Maximum value: " << a << endl;
        cout << "Minimum value: " << b << endl;
    }
    else if (a == b)
    {
        cout << "Equal values.." << a << " & " << b << endl;
    }
    else
    {
        cout << "Maximum value: " << b << endl;
        cout << "Minimum value: " << a << endl;
    }
}