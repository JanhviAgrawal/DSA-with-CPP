#include <iostream>
using namespace std;
int main()
{
    int n, rem, sum = 0, a;
    cout << "Enter any Number: ";
    cin >> n;

    a = n;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        sum = sum + rem * rem * rem;
    }

    (sum == a) ? cout << a << " is Armstrong number" : cout << a << " is not Armstrong";
}