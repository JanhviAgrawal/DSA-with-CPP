#include <iostream>
using namespace std;

main()
{
    for (int i = 5; i >=1; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}