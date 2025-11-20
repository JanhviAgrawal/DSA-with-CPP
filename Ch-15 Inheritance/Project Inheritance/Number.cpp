#include <iostream>
using namespace std;

class Number
{
protected:
    int num;

public:
    void setNumber()
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    void getSquare()
    {
        cout << endl
             << "Square of " << num << " is: " << (num * num) << endl;
    }

    void getCube()
    {
        cout << endl
             << "Cube of " << num << " is: " << (num * num * num) << endl
             << endl;
    }
};

class Square : public Number
{
public:
    void setSquare()
    {
        setNumber();
    }

    void getSquareValue()
    {
        getSquare();
    }
};

class Cube : public Number
{
public:
    void setCube()
    {
        setNumber();
    }

    void getCubeValue()
    {
        getCube();
    }
};
