#include <iostream>
#define PI 3.14
#define NUM 2
using namespace std;

main()
{
    float r;

    cout << "Enter radius: ";
    cin >> r;

    cout << "Perimeter of the Circle: " << NUM * PI * r << endl
         << endl;
}