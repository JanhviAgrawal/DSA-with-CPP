#include <iostream>
using namespace std;

main()
{
    // Swaping with third variable
    int a, b, c;
    cout << "Enter Value of A: ";
    cin >> a;
    cout << endl
         << "Enter Value of B: ";
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << endl
         << "A = " << a << endl
         << "B = " << b << endl;
}