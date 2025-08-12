#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int sum = 0;

    while (n > 0 || sum > 9)
    {
        if (n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }

    cout << "Single digit number: " << sum << endl;
}