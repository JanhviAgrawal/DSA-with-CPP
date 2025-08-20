#include <iostream>
using namespace std;

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr[5];

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = &a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i] << "\n";
        cout << endl
            << a[i] << "\n";

        cout << endl
             << *ptr[i] << "\n";
    }
}
