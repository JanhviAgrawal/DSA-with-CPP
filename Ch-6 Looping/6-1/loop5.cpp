#include <iostream>
using namespace std;

main()
{
    int a = 1;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    while (n >= a)
    {
        cout << n << "\t";
        n--;
    }
}