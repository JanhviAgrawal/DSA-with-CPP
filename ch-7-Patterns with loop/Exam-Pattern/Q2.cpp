#include <iostream>
using namespace std;

main()
{
    int n = 11;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++, n++)
        {
            cout << n << " ";
        }
        cout << endl;
    }
}