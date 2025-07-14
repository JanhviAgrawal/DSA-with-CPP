#include <iostream>
using namespace std;

main()
{
    int start, end;
    cout << "Enter the first number: ";
    cin >> start;

    cout << "Enter the second number: ";
    cin >> end;

    int a = start;
    while (a <= end)
    {
        if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
        {
            cout << a << endl;
        }
        a++;
    }
}