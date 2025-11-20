#include <iostream>
using namespace std;

int factorial(int n)
{
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main()
{
    int fact;
    cout << "Enter any number: ";
    cin >> fact;
    int ans = factorial(fact);
    cout << "Factorial : " << ans << endl;
    return 0;
}