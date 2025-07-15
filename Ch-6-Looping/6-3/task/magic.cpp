#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any Number: ";
    cin >> n;

    int num = n;
    int a;
    int sum = 0;
    int multi = 1;

    while (num != 0)
    {
        a = num % 10;
        sum += a;
        multi *= a;
        num /= 10;
    }

    if (sum == multi)
    {
        cout << "It is a Magic Number." << endl;
    }
    else
    {
        cout << "It's Not a Magic Number." << endl;
    }
}