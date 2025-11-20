#include <iostream>
using namespace std;

main()
{
    int i = 1, n;
    cout << "Enter a number: ";
    cin >> n;

    do
    {
        cout << i << endl;
        i++;
    } while (i <= n);
}