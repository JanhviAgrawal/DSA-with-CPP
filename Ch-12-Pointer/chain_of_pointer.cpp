#include <iostream>
using namespace std;

main()
{
    int a = 45;
    int *ptr1;
    int **ptr2;
    int ***ptr3;

    ptr1 = &a;
    ptr2 = &ptr1;
    ptr3 = &ptr2;

    cout << "A\t: " << a << endl;
    cout << "PTR1\t: " << *ptr1 << endl;
    cout << "PTR2\t: " << **ptr2 << endl;
    cout << "PTR2\t: " << ***ptr3 << endl
         << endl;

    **ptr2 = 89;
    cout << "A\t: " << a << endl;
    cout << "PTR1\t: " << *ptr1 << endl;
    cout << "PTR2\t: " << **ptr2 << endl;
    cout << "PTR2\t: " << ***ptr3 << endl;
}