#include <iostream>
using namespace std;

main()
{
    int n, res;
    cout << "Enter any Number: ";
    cin >> n;
    int rem;
    int rev = 0;
    res = n;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (res == rev)
    {
        cout << "It is a plaindrom Number.";
    }
    else
    {
        cout << "It's not a plaindrom Number.";
    }
}