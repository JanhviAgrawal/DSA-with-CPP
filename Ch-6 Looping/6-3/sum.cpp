#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int i = 1;
    int sum = 0;
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    cout << "Sum = " << sum << endl;
}