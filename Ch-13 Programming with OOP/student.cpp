#include <iostream>
using namespace std;

class Student
{
public:
    // Attributes == Data members;
    int rollNo;
    char name[20];
    int age;
    string course;
};

int main()
{
    // object : class_name objName;
    Student student;

    // operator used = dot operator (.);

    cout << endl
         << "Input details - " << endl;
    cout << "Enter roll No.\t:";
    cin >> student.rollNo;
    cout << "Enter Name\t:";
    cin >> student.name;
    cout << "Enter age\t:";
    cin >> student.age;
    cout << "Enter Course name\t:";
    cin >> student.course;

    cout << endl
         << "Output Details - " << endl;
    cout << "Roll No. : " << student.rollNo << endl;
    cout << "Nmae : " << student.name << endl;
    cout << "Age : " << student.age << endl;
    cout << "Course : " << student.course << endl;
}