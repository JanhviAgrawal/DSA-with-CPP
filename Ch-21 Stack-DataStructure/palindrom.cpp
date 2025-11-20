#include "Stack.cpp"
#include <string.h>

int main()
{
    char str[MAX];
    cout << "Enter any String: ";
    cin >> str;

    Stack<char> stack(MAX);

    strlwr(str);
    (stack.isPalindrom(str)) ? cout << "The String is Palindrom" : cout << "The String is Not Palindrom";
}