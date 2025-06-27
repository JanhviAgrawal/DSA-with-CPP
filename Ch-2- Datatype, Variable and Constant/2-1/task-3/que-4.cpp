#include <iostream>
#define NUM 100
using namespace std;

main()
{
    float p, r, n;

    cout << "Enter Principal amount: ";
    cin >> p;

    cout << "Enter Rate of Interest: ";
    cin >> r;

    cout << "Enter Duration of time in month: ";
    cin >> n;

    cout << "Simple Intrest: " << p * r * n / NUM << endl;
}