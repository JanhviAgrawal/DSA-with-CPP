#include <iostream>
using namespace std;

// Parent class
class Arithmetic
{
public:
};

class Operations : public Arithmetic
{
public:
    void calculate(double a, double b)
    {
        if (b == 0)
        {
            cout << "Division by zero is not allowed!" << endl;
        }
        else
        {
            cout << "Division: " << a / b << endl;
        }
    }

    void calculate(double a, double b, double c)
    {
        cout << "Subtraction: " << a - b - c << endl;
    }

    void calculate(double a, double b, double c, double d)
    {
        cout << "Multiplication: " << a * b * c * d << endl;
    }

    void calculate(double a, double b, double c, double d, double e)
    {
        cout << "Addition: " << a + b + c + d + e << endl;
    }

    // Getter
    void getData()
    {
        double a, b, c, d, e;

        cout << "Enter numbers for division: " << endl;
        cout << "Enter A: ";
        cin >> a;
        cout << "Enter B: ";
        cin >> b;
        calculate(a, b);

        cout<<endl;
        cout << "Enter three numbers for subtraction: " << endl;
        cout << "Enter A: ";
        cin >> a;
        cout << "Enter B: ";
        cin >> b;
        cout << "Enter C: ";
        cin >> c;
        calculate(a, b, c);

        cout<<endl;
        cout << "Enter four numbers for multiplication: " << endl;
        cout << "Enter A: ";
        cin >> a;
        cout << "Enter B: ";
        cin >> b;
        cout << "Enter C: ";
        cin >> c;
        cout << "Enter D: ";
        cin >> d;
        calculate(a, b, c, d);

        cout<<endl;
        cout << "Enter five numbers for addition: " << endl;
        cout << "Enter A: ";
        cin >> a;
        cout << "Enter B: ";
        cin >> b;
        cout << "Enter C: ";
        cin >> c;
        cout << "Enter D: ";
        cin >> d;
        cout << "Enter E: ";
        cin >> e;
        calculate(a, b, c, d, e);
    }
};