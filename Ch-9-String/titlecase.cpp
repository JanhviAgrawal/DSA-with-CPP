#include <iostream>
#include <cstring>
using namespace std;

main()
{
    char str1[20], str2[20];

    cout << "Enter your string : ";
    cin >> str1 >> str2;

    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
            str1[i] += 32;
    }

    if (str1[0] >= 'a' && str1[0] <= 'z')
        str1[0] -= 32;

    for (int i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] >= 'A' && str2[i] <= 'Z')
            str2[i] += 32;
    }

    if (str2[0] >= 'a' && str2[0] <= 'z')
        str2[0] -= 32;

    cout << "Title Case: " << str1 << " " << str2 << endl;

}