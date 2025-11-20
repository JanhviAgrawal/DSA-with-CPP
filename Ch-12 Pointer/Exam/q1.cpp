#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[50];
    char *ptr;
    int len = 0;

    cout << "Enter any string: ";
    gets(str);

    ptr = str;

    for (ptr = str; *ptr != '\0'; ptr++, len++)
        ;
    cout << "The length of a string is: " << len << endl;
}
