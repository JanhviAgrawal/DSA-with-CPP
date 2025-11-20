#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int i = 1;
    int fact = 1;

    do
    {
        fact *= i;
        i++;
    } while (i <= n);

    cout << "Factorial of " << n << " = " << fact;
}