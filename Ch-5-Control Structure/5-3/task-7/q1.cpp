#include <iostream>
using namespace std;

main()
{
    int a, b, c;
    cout << "Enter a,b and c: ";
    cin >> a >> b >> c;

    (a > b)
        ? (a > c) ? cout << a << " is Maximum"
                  : cout << c << " is Maximum"
    : (b > c) ? cout << b << " is Maximum"
              : cout << c << " is Maximum";
}