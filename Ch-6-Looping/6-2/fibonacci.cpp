#include <iostream>
using namespace std;

main()
{
    // fibonacci series
    int a = 1, b = 2;
    int i = 1;
    int n;
    cout << "Enter any number: ";
    cin >> n;
    cout << a << "\t" << b << "\t";

    while (i <= n)
    {
        int c = a + b;
        cout << c << "\t";
        a = b;
        b = c;

        i++;
    }
}