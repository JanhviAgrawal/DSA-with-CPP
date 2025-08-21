#include <iostream>
using namespace std;

int sum(int *val1, int *val2)
{
    return *val1 + *val2;
}
int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Sum: " << sum(&a, &b);
}