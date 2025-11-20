#include <iostream>
#include "Student.cpp"
using namespace std;

int main()
{
    Student students[5];

    for (int i = 0; i < 5; i++)
    {
        cout << endl
             << "Student No. " << i + 1 << endl;
        students[i].setStudentData();
    }
    for (int i = 0; i < 5; i++)
    {
        cout << endl
             << "Data of Student " << i + 1 << endl;
        students[i].getStudentData();
    }
}