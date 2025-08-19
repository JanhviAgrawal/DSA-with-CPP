#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n = 25;
    int *ptr;

    ptr = &n;

    cout << "Number : " << n << endl;
    cout << "Number : " << *ptr << endl;

    n = 78;
    cout << endl
         << "Number : " << n << endl;
    cout << "Number : " << *ptr << endl;

    *ptr = 100;
    cout << endl
         << "Number : " << n << endl;
    cout << "Number : " << *ptr << endl;
    cout << endl
         << "address: " << ptr << endl;
}