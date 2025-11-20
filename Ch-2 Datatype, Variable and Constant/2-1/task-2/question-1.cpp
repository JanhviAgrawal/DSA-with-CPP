#include <iostream>
using namespace std;

main()
{
    int a = 24, b = 7;

    cout << "Addition of " << a << " and " << b << " is " << a + b << endl;
    cout << "Subtraction of " << a << " and " << b << " is " << a - b << endl;
    cout << "Multiplication of " << a << " and " << b << " is " << a * b << endl;
    cout << "Division of " << a << " and " << b << " is " << a / b << endl;
    cout << "Modular of " << a << " and " << b << " is " << a % b << endl
         << endl
         << endl;

    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    cout << a << " % " << b << " = " << a % b << endl
         << endl;
}