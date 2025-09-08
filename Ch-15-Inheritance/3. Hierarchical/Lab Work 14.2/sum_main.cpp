#include "Sum.cpp"

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