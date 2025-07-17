#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int a = 1;
    int b = 0;

    for (int i = 1; i <= n; i++)
    {
        cout << a << "\t";
        b++;
        a += b;
    }
}
