#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter any Number: ";
    cin >> n;

    int a;
    int sum = 0;
    int multi = 1;

    while (n != 0)
    {
        a = n % 10;
        sum += a;
        multi *= a;
        n /= 10;
    }

    (sum == multi) ? cout << "It is a magic Number" : cout << "Its not a Magic Number";
}