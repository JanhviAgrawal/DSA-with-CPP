#include <iostream>
#include <cstring>
using namespace std;

main()
{
    char name[20];
    cout << "Enter your name: ";
    cin >> name;

    int len = 0;

    for (int i = 0; name[i] != '\0'; i++, len++);

    cout<<"Length : "<<len;
}