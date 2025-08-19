#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char email[50];
    cout << "Enter your Email: ";
    cin >> email;

    int len = strlen(email);
    int at = 0, dot = 0;
    int last = -1;

    if (len >= 6)
    {
        for (int i = 0; i < len; i++)
        {
            if (email[i] == '@')
                at++;
            else if (email[i] == '.')
            {
                dot++;
                last = i;
            }
        }

        if (at == 1 && dot >= 1 && len >= 6 && (len - last - 1) > 1)
        {
            cout << "Email is valid...!" << endl;
        }
        else
        {
            cout << "Invalid Email, Re-enter...!" << endl;
        }
    }
    else
    {
        cout << "Invalid Email, Re-enter...!" << endl;
    }

    return 0;
}
