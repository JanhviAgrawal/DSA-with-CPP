#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    void setA()
    {
        cout << "Enter a : ";
        cin >> this->a;
    }

    void getA()
    {
        cout << this->a;
    }
};

class B : virtual public A
{
protected:
    int b;

public:
    void setB()
    {
        cout << "Enter b : ";
        cin >> this->b;
    }

    void getB()
    {
        cout << " + " << this->b;
    }
};

class C : virtual public A
{
protected:
    int c;

public:
    void setC()
    {
        cout << "Enter c : ";
        cin >> this->c;
    }

    void getC()
    {
        cout << " + " << this->c;
    }
};

class D : public C, public B
{
private:
    int d;

public:
    void setD()
    {
        cout << "Enter d : ";
        cin >> this->d;
    }

    void getD()
    {
        cout << " + " << this->d;
    }

    void sum()
    {
        // Calculate and print the sum
        cout << endl
             << endl
             << "Sum = " << a + b + c + d << endl;
    }
};

int main()
{
    D d1;

    d1.setA();
    d1.setB();
    d1.setC();
    d1.setD();

    cout << endl
         << "Numbers: ";
    d1.getA();
    d1.getB();
    d1.getC();
    d1.getD();

    d1.sum();
}