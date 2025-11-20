#include <iostream>
using namespace std;

// Take Nothing Return Something

// Input int
int inputInt()
{
    int n;
    cin >> n;

    return n;
}

// addition
int addition()
{
    int a, b;
    cout << "Enter First Number: ";
    cin >> a;

    cout << "Enter Second Number: ";
    cin >> b;

    return a + b;
}

int main()
{
    // int ans = addition();

    // cout << "Sum = " << ans;
    cout << "Sum = " << addition() << endl
         << endl;

    int age;
    cout << "Enter Your Age: ";
    age = inputInt();

    cout << "Age : " << age;

    return 0;
}