#include <iostream>
using namespace std;

class Shape
{
public:
    double width, height;

    Shape()
    {
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter height: ";
        cin >> height;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle() {}

    double area()
    {
        return width * height;
    }
};

class Triangle : public Shape
{
public:
    Triangle() {}

    double area()
    {
        return 0.5 * width * height;
    }
};

void getShape(Rectangle rect)
{
    cout << rect.area() << endl;
}

void getShape(Triangle tri)
{
    cout << tri.area() << endl;
}