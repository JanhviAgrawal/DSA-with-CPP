#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int count = 0;
    while (n != 0)
    {
        count++;
        n /= 10;
    }
    cout<< "Length = " << count;
}