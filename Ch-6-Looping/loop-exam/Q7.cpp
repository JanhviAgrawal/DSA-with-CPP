#include <iostream>
using namespace std;

main()
{
    int n, num, a, z;

    cout << "Enter any number:";
    cin >> n;

    num = n;
    z = num % 10;
    while (num >= 10)
    {
        num /= 10;
    }
    a = num;

    int sum = a + z;

    cout << "the sum of the first and the last digit: " << sum << endl;
}