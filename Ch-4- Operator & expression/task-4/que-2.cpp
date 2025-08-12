#include <iostream>
using namespace std;

main()
{
    // Swaping without third variable

    int a, b;
    cout << "Enter Value of A: ";
    cin >> a;
    cout << endl
         << "Enter Value of B: ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << endl
         << "A = " << a << endl
         << "B = " << b << endl;
}