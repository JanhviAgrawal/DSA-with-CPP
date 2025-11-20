#include <iostream>
#define NUM 3
using namespace std;

main()
{
    // Program to find the formula's answer (x-y)^3

    int x, y, c;
    cout << "Enter value of X: ";
    cin >> x;

    cout << endl
         << "Enter value of Y: ";
    cin >> y;

    // x^3 - 3x^2y + 3xy^2 - y^3

    c = (x * x * x) - NUM * x * x * y + NUM * x * y * y - (y * y * y);

    cout << endl
         << "(x - y)^3 = " << c << endl;
}