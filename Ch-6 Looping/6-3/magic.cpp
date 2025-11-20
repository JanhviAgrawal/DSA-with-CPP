#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int i;
    int sum = 0;
    int multi = 1;

    do
    {
        i = n % 10;
        sum += i;
        multi *= i;
        n /= 10;
    } while (n != 0);

    (sum == multi) ? cout << "It is a Magic Number" : cout << "Its not a Magic Number";
}