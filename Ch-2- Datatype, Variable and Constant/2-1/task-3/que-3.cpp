#include <iostream>
#define NUM 0.5
using namespace std;

main()
{
    float b, h;
    cout << "Enter base of a Triangle: ";
    cin >> b;

    cout << endl
         << "Enter height of a Triangle: ";
    cin >> h;

    cout << endl
         << "Area of Triangle: " << NUM * b * h << endl
         << endl;
}