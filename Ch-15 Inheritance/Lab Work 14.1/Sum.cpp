#include <iostream>
using namespace std;

class X
{
protected:
    int a, b, c;
};

class Sum : public X
{
public:
    // Setter
    void setData()
    {
        cout << endl
             << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << "Enter third number: ";
        cin >> c;
    }

    // Getter
    void getData()
    {
        int sumCube = (a * a * a) + (b * b * b) + (c * c * c);

        cout << endl
             << "Sum of the cubes of " << a << ", " << b << ", and " << c << " is: " << sumCube << endl;
    }
};