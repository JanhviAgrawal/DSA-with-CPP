#include <iostream>
using namespace std;

main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if (j % 2 == 0)
            {
                if (j == 2)
                {
                    cout << "B ";
                }
                else if (j == 4)
                {
                    cout << "C ";
                }
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << endl;
    }
}