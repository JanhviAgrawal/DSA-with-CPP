#include <iostream>
#include <cstdio>
using namespace std;

class Employee
{
protected:
    int id;
    char name[50], role[50];

public:
    void setData()
    {
        cout << "Enter Employee ID: ";
        cin >> id;
        fflush(stdin);

        cout << "Enter Employee Name: ";
        gets(name);

        cout << "Enter Employee Role: ";
        gets(role);
    }

    void getData()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Role: " << role << endl;
    }
};

class B : public Employee
{
protected:
    float salary;
    int experience;

public:
    void setSalaryExperience()
    {
        cout << "Enter Employee Salary: ";
        cin >> salary;
        cout << "Enter Employee Experience (years): ";
        cin >> experience;
        fflush(stdin);
    }

    void getSalaryExperience()
    {
        cout << "Employee Salary: " << salary << endl;
        cout << "Employee Experience: " << experience << " years" << endl;
    }
};

class C : public B
{
protected:
    char comp_name[50], address[50];

public:
    void setCompanyDetails()
    {
        cout << "Enter Company Name: ";
        gets(comp_name);
        cout << "Enter Company Address: ";
        gets(address);
    }

    void getCompanyDetails()
    {
        cout << "Company Name: " << comp_name << endl;
        cout << "Company Address: " << address << endl;
    }
};

class D : public C
{
protected:
    char email[50], contact[50];

public:
    void setContactDetails()
    {
        cout << "Enter Employee Email: ";
        gets(email);
        cout << "Enter Employee Contact: ";
        gets(contact);
    }

    void getContactDetails()
    {
        cout << "Employee Email: " << email << endl;
        cout << "Employee Contact: " << contact << endl;
    }
};