#include <iostream>
using namespace std;

main()
{
    // the character is Vowel or Consonants.

    char ch;

    cout << "Enter One Alphabet: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << ch << " is a Vowel.";
    }
    else
    {
        cout << ch << " is a Consonants.";
    }
}