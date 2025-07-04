#include <iostream>
using namespace std;

main()
{
    // number is positive, negetive or 0 (means neutral)

    float num;

    cout << "Enter a Number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "The number is Negative.";
    }
    else if (num > 0)
    {
        cout << "The number is Positive.";
    }
    else
    {
        cout << "The number is Neutral.";
    }
}
