#include <iostream>
using namespace std;

main()
{
    // leap year

    int year;

    cout << "Enter Year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << year << " is a Leap Year and have 366 days.";
    }
    else
    {
        cout << year << " is not a Leap Year and ahve 365 days.";
    }
}