#include <iostream>
using namespace std;

main()
{
    char start, end;
    cout << "Enter Starting Alphabet: ";
    cin >> start;

    cout << "Enter ending Alphabet: ";
    cin >> end;

    char ch = start;
    do
    {
        cout << ch << endl;
        ch++;
    } while (ch <= end);
}