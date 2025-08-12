#include <iostream>
using namespace std;

main()
{
    int a = 1;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    while (n >= a)
    {
        if (n % 2 != 0)
        {
            cout << n << "\t";
        }
        n--;
    }
}