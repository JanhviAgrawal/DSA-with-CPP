#include <iostream>
using namespace std;

main()
{
    int a = 1;
    int n;

    cout << "Enter a Number: ";
    cin >> n;

    while (a <= n)
    {
        cout << a << "\t";
        a++;
    }
}