#include <iostream>
#define NUM 2
using namespace std;

main()
{
    // Program to find the formula's answer (x+y)^2

    int x, y, c;
    cout << "Enter value of X: ";
    cin >> x;

    cout << endl
         << "Enter value of Y: ";
    cin >> y;

    // a^2 + 2ab + b^2

    c = (x * x) + NUM * x * y + (y * y);

    cout << "(x + y)^2 = " << c << endl;
}