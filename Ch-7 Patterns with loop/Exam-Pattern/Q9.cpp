#include <iostream>
using namespace std;

main()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int s = 6; s > i; s--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int k = i - 1; k >= 1; k--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 5; i >= 1; i--)
    {
        for (int s = 6; s > i; s--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int k = i - 1; k >= 1; k--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}