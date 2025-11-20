#include <iostream>
using namespace std;

main()
{
    int a, b, c;
    cout << "Enter a, b & c;";

    cin >> a >> b >> c;

    if (a < b)
    {
        if (a < c)
        {
            cout << a << " is minimum" << endl;
        }
        else
        {
            cout << c << " is minimum" << endl;
        }
    }
    else
    {
        if (b < c)
        {
            cout << b << " is minimum" << endl;
        }
        else
        {
            cout << c << " is minimum" << endl;
        }
    }
}