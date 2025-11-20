#include <iostream>
using namespace std;

void swapping(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    swapping(&a, &b);

    cout << "A\t:" << a << endl;
    cout << "B\t:" << b << endl;
}