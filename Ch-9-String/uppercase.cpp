#include <iostream>
#include <cstring>
using namespace std;

main()
{
    char str[20];
    cout << "Enter your string: ";
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++)
    {
        // if (str[i] >= 'a' && str[i] <= 'z')
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
    }
    cout << "Uppercase: " << str;
}