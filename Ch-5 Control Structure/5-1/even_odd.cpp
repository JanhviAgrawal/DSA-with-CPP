#include <iostream>
using namespace std;

main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    if ((num / 2) * 2 == num)
    {
        // even = (num % 2 == 0)
        cout << num << " is even Number.";
    }
    else
    {
        // odd = (num % 2 != 0)
        cout << num << " is odd Number.";
    }
}