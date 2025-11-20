#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int count = 0;
    do
    {
        count++;
        n /= 10;
    } while (n != 0);
    cout << "Length = " << count;
}