#include <iostream>
using namespace std;

main()
{
    for (int i = 5; i >= 1; i--)
    {
        int n = 50;
        int num = 0;
        for (int j = 5; j >= i; j--)
        {
            if (i % 2 != 0)
            {
                char ch = j + 64;
                cout << ch << "\t";
            }
            else
            {
                if (j % 2 != 0)
                {
                    cout << (50 - num * 20) << "\t";
                    n++;
                }
                else
                {
                    char ch = j + 64;
                    cout << ch << "\t";
                }
            }
        }
        cout << endl;
    }
}