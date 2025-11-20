#include <iostream>
using namespace std;

// Input Function
void inputNumbers(int &a, int &b)
{
    cout << "Enter First Number: ";
    cin >> a;

    cout << "Enter Second Number: ";
    cin >> b;
}

// Addition function
int addNumbers(int a, int b)
{
    return a + b;
}

// Subtraction Function
int subtractNumbers(int a, int b)
{
    return a - b;
}

// Multiplication Function
int multiplyNumbers(int a, int b)
{
    return a * b;
}

// Division Function
int divisionNumbers(int a, int b)
{
    if (b == 0)
    {
        cout << "Error: Cannot divide by zero." << endl;
        return 0;
    }
    return a / b;
}

// Percentage Function
int modulusNumbers(int a, int b)
{
    if (b == 0)
    {
        cout << "Error: Cannot perform modulus by zero." << endl;
        return 0;
    }
    return a % b;
}
