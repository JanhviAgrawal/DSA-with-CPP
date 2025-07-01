#include <iostream>
#define NUM 2
using namespace std;

main()
{
    // Program to find the formula's answer (x+y+z)^2

    int x, y, z, c;

    cout << "Enter value of X: ";
    cin >> x;

    cout << endl
         << "Enter value of Y: ";
    cin >> y;

    cout << endl
         << "Enter value of Z: ";
    cin >> z;

    // (x + y + z)^2 = x^2 + y^2 + z^2 + 2xy + 2xz + 2yz

    c = (x * x) + (y * y) + (z * z) + NUM * x * y + NUM * x * z + NUM * y * z;

    cout << endl
         << "(x + y + z)^2 = " << c << endl;
}