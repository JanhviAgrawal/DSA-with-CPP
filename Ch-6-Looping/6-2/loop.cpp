#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int a = 1;
    while (a <= n)
    {
        if (a % 2 != 0)
        {
            cout << a << endl;
        }
        a++;
    }
}