#include <iostream>
using namespace std;

main()
{
    int a, b, c, d;

    cout << "Enter a, b, c, d: ";
    cin >> a >> b >> c >> d;

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                cout << a << " is Maximum" << endl;
            }
            else
            {
                cout << d << " is maximum" << endl;
            }
        }
        else
        {
            if (c > d)
            {
                cout << c << " is maximum" << endl;
            }
            else
            {
                cout << d << " is maximum" << endl;
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                cout << b << " is maximum" << endl;
            }
            else
            {
                cout << d << " is maximum" << endl;
            }
        }
        else
        {
            if (c > d)
            {
                cout << c << " is maximum" << endl;
            }
            else
            {
                cout << d << " is maximum" << endl;
            }
        }
    }
}
