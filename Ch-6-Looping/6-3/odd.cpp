#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int i = 1;

    do
    {
        if (i % 2 != 0)
            cout << i << endl;

        i++;
    } while (i <= n);
}