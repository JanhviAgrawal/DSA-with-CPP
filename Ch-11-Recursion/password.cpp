#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char psw[20];
    cout << "Enter your Password: ";
    cin >> psw;

    int len = strlen(psw);
    int upr = 0, lwr = 0, digit = 0, symbol = 0;

    if (len >= 6)
    {
        for (int i = 0; i < len; i++)
        {
            if (psw[i] >= 65 && psw[i] <= 90)
            {
                upr++;
            }
            else if (psw[i] >= 97 && psw[i] <= 122)
            {
                lwr++;
            }
            else if (psw[i] >= 48 && psw[i] <= 57)
            {
                digit++;
            }
            else
            {
                symbol++;
            }

        }
        if (upr >= 1 && lwr >= 1 && digit >= 1 && symbol >= 1)
        {
            cout << "Password is strong...!" << endl;
        }
        else
        {
            cout << "Re-Enter Password, not Strong...!" << endl;
        }
    }
    else
    {
        cout << "Re-Enter Password, not Strong...!" << endl;
    }

    return 0;
}