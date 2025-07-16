#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int i;
    for (i = 1; n >= i; n--)
    {
        cout << n << endl;
    }
}