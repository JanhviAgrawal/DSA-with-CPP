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
        // if (str[i] >= 'A' && str[i] <= 'Z')
        else if (str[i] >= 64 && str[i] <= 90)
        {
            str[i] += 32;
        }
    }
    cout << "Togglecase: " << str;
}