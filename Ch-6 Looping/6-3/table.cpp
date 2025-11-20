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
        cout << n << " * " << i << " = " << n * i << endl;
        i++;
    } while (i <= 10);
}