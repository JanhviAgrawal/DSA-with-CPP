#include <iostream>
#include <cstring>
using namespace std;

main()
{
    char str1[20], str2[20];
    cout << "Enter your string: ";
    cin >> str1 >> str2;

    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] >= 65 && str1[i] <= 90)
            str1[i] += 32;
    }

    if (str2[0] >= 97 && str2[0] <= 122)
        str2[0] -= 32;

    for (int i = 1; str2[i] != '\0'; i++)
    {
        if (str2[i] >= 65 && str2[i] <= 90)
            str2[i] += 32;
    }

    cout << "CamelCase: " << str1 << str2;
}
