#include "Area.cpp"

int main()
{
    Rectangle rect;
    Triangle tri;
    cout << endl;
    cout << "Area of Rectangle: ";
    getShape(rect);

    cout << "Area of Triangle: ";
    getShape(tri);

    return 0;
}