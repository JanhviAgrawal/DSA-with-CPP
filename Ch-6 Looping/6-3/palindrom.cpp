#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int rem;
    int rev = 0;
    int res = n;

    do
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    } while (n != 0);

    (res == rev) ? cout << "Palindrom Number." : cout << "Not Palindrom number.";
}