#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int a = 1;
    int sum = 0;

    while (a <= n)
    {
        sum += a;
        a++;
    }
    cout << "Sum: " << sum << endl;
}