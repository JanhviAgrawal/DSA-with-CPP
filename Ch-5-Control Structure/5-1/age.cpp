#include <iostream>
using namespace std;

main()
{
    int age;

    cout << "Enter Your Age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are eligible to Vote...";
    }
    else
    {
        cout << "You are not eligible to Vote...";
    }
}