#include <iostream>
using namespace std;

main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            (j % 2 == 0) ? cout << "1 " : cout << "0 ";
        }
        cout << endl;
    }
}