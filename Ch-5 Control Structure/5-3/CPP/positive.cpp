#include <iostream>
using namespace std;

main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    if (num > 0)
    {
        cout << num << " is positive number";
    }
    else if (num == 0)
    {
        cout << num << " is Neutral number";
    }
    else
    {
        cout << num << " is negetive number";
    }
}