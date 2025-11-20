#include <iostream>
using namespace std;

main()
{
    int i = 1, n;
    cout << "Enter any Number: ";
    cin >> n;

    do
    {
        cout << n << endl;
        n--;
    } while (n >= i);
}