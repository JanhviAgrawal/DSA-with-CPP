#include <iostream>
#include <string.h>
using namespace std;

class Student
{
private:
    int stu_id;
    char stu_name[20];
    int stu_age;
    char stu_course[50];
    char stu_city[20];
    char stu_email[50];
    char stu_college[20];

public:
    // Setter
    void setStudentData()
    {
        cout << "Enter Student id: ";
        cin >> this->stu_id;
        fflush(stdin);
        cout << "Enter Student Name: ";
        gets(this->stu_name);
        cout << "Enter Student Age: ";
        cin >> this->stu_age;
        fflush(stdin);
        cout << "Enter Student Course Name: ";
        gets(this->stu_course);
        cout << "Enter Student City Name: ";
        cin >> this->stu_city;
        cout << "Enter Student Email: ";
        cin >> this->stu_email;
        fflush(stdin);
        cout << "Enter Student Collage Name: ";
        gets(this->stu_college);
    }

    // Getter
    void getStudentData()
    {
        cout << endl
             << "Student id: " << this->stu_id << endl;
        cout << "Student Name: " << this->stu_name << endl;
        cout << "Student Age: " << this->stu_age << endl;
        cout << "Student Course: " << this->stu_course << endl;
        cout << "Student City: " << this->stu_city << endl;
        cout << "Student Email: " << this->stu_email << endl;
        cout << "Student Collage Name: " << this->stu_college << endl;
    }
};