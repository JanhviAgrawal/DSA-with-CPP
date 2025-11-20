#include <iostream>
using namespace std;

int main()
{
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of Character  " << sizeof(char) << " bytes" << endl;
    cout << "Size of Float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of Double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of long int: " << sizeof(long int) << " bytes" << endl;
    cout << "Size of long long int: " << sizeof(long long int) << " bytes" << endl;
    cout << "Size of short int: " << sizeof(short int) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;

    int array[5];
    cout << endl
         << "Size of Array: " << sizeof(array) << " bytes" << endl;

    char str[10];
    cout << endl
         << "Size of String: " << sizeof(str) << " bytes" << endl;
}