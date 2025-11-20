#include <iostream>
using namespace std;

// Take Something Return Nothing

void sum(int, int, int, char);
int main()
{
    int a, b, c;
    cout << "Enter first, second and third number : ";
    cin >> a >> b >> c;

    char ch;
    cout << "Enter a Character: ";
    cin >> ch;

    sum(a, b, c, ch);

    return 0;
}

void sum(int a, int b, int c, char ch)
{
    cout << "Sum = " << a + b + c << endl;
    cout << "Character = " << ch << endl;
}