#include <iostream>
using namespace std;

main()
{

    int n = 100;
    for (int i = 10; i >= 6; i--)
    {
        int num = n;
        for (int j = i; j >= 6; j--)
        {
            if (i % 2 == 0)
            {
                cout << num << "\t";
                num -= 10;
            }
            else
            {
                cout << j << "\t";
            }
        }
        if (i % 2 == 0)
        {
            n -= 20;
        }
        cout << endl;
    }
}