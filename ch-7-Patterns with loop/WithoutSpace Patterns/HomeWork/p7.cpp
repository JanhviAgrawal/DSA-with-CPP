#include <iostream>
using namespace std;

main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if (i % 2 != 0)
            {
                if (j % 2 == 0)
                {
                    char ch = j + 64;
                    cout << ch << " ";
                }
                else
                {
                    char cha = j + 96;
                    cout << cha << " ";
                }
            }
            else
            {
                if (j % 2 == 0)
                {
                    cout << j;
                }
                else
                {
                    char alpha = j + 96;
                    cout << alpha << " ";
                }
            }
        }
        cout << endl;
    }
}