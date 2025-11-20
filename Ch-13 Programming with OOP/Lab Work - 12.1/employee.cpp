#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
public:
    int emp_id;
    char emp_name[20];
    int emp_age;
    char emp_role[50];
    int emp_salary;
    char emp_city[20];
    char emp_experience[50];
    char emp_company_name[50];
};

int main()
{
    // object
    Employee e1, e2, e3, e4, e5;

    cout << endl
         << "Input details of 1st Employee - " << endl;
    cout << "Enter your Id Number: ";
    cin >> e1.emp_id;
    fflush(stdin);
    cout << "Enter your Name: ";
    gets(e1.emp_name);
    cout << "Enter your Age: ";
    cin >> e1.emp_age;
    fflush(stdin);
    cout << "Enter your Role: ";
    gets(e1.emp_role);
    cout << "Enter your Salary: ";
    cin >> e1.emp_salary;
    cout << "Enter your City Name: ";
    cin >> e1.emp_city;
    fflush(stdin);
    cout << "Enter your Experience: ";
    gets(e1.emp_experience);
    fflush(stdin);
    cout << "Enter your Company name: ";
    gets(e1.emp_company_name);

    cout << endl
         << "Input details of 2nd Employee - " << endl;
    cout << "Enter your Id Number: ";
    cin >> e2.emp_id;
    fflush(stdin);
    cout << "Enter your Name: ";
    gets(e2.emp_name);
    cout << "Enter your Age: ";
    cin >> e2.emp_age;
    fflush(stdin);
    cout << "Enter your Role: ";
    gets(e2.emp_role);
    cout << "Enter your Salary: ";
    cin >> e2.emp_salary;
    cout << "Enter your City Name: ";
    cin >> e2.emp_city;
    fflush(stdin);
    cout << "Enter your Experience: ";
    gets(e2.emp_experience);
    fflush(stdin);
    cout << "Enter your Company name: ";
    gets(e2.emp_company_name);

    cout << endl
         << "Input details of 3rd Employee - " << endl;
    cout << "Enter your Id Number: ";
    cin >> e3.emp_id;
    fflush(stdin);
    cout << "Enter your Name: ";
    gets(e3.emp_name);
    cout << "Enter your Age: ";
    cin >> e3.emp_age;
    fflush(stdin);
    cout << "Enter your Role: ";
    gets(e3.emp_role);
    cout << "Enter your Salary: ";
    cin >> e3.emp_salary;
    cout << "Enter your City Name: ";
    cin >> e3.emp_city;
    fflush(stdin);
    cout << "Enter your Experience: ";
    gets(e3.emp_experience);
    fflush(stdin);
    cout << "Enter your Company name: ";
    gets(e3.emp_company_name);

    cout << endl
         << "Input details of 4th Employee - " << endl;
    cout << "Enter your Id Number: ";
    cin >> e4.emp_id;
    fflush(stdin);
    cout << "Enter your Name: ";
    gets(e4.emp_name);
    cout << "Enter your Age: ";
    cin >> e4.emp_age;
    fflush(stdin);
    cout << "Enter your Role: ";
    gets(e4.emp_role);
    cout << "Enter your Salary: ";
    cin >> e4.emp_salary;
    cout << "Enter your City Name: ";
    cin >> e4.emp_city;
    fflush(stdin);
    cout << "Enter your Experience: ";
    gets(e4.emp_experience);
    fflush(stdin);
    cout << "Enter your Company name: ";
    gets(e4.emp_company_name);

    cout << endl
         << "Input details of 5th Employee - " << endl;
    cout << "Enter your Id Number: ";
    cin >> e5.emp_id;
    fflush(stdin);
    cout << "Enter your Name: ";
    gets(e5.emp_name);
    cout << "Enter your Age: ";
    cin >> e5.emp_age;
    fflush(stdin);
    cout << "Enter your Role: ";
    gets(e5.emp_role);
    cout << "Enter your Salary: ";
    cin >> e5.emp_salary;
    cout << "Enter your City Name: ";
    cin >> e5.emp_city;
    fflush(stdin);
    cout << "Enter your Experience: ";
    gets(e5.emp_experience);
    fflush(stdin);
    cout << "Enter your Company name: ";
    gets(e5.emp_company_name);

    cout << endl
         << endl
         << "Output details of 1st Employee - " << endl;

    cout << "Id : " << e1.emp_id << endl;
    cout << "Name : " << e1.emp_name << endl;
    cout << "Age : " << e1.emp_age << endl;
    cout << "Role : " << e1.emp_role << endl;
    cout << "Salary : " << e1.emp_salary << endl;
    cout << "City : " << e1.emp_city << endl;
    cout << "Experience : " << e1.emp_experience << endl;
    cout << "Company Name : " << e1.emp_company_name << endl;

    cout << endl
         << endl
         << "Output details of 2nd Employee - " << endl;

    cout << "Id : " << e2.emp_id << endl;
    cout << "Name : " << e2.emp_name << endl;
    cout << "Age : " << e2.emp_age << endl;
    cout << "Role : " << e2.emp_role << endl;
    cout << "Salary : " << e2.emp_salary << endl;
    cout << "City : " << e2.emp_city << endl;
    cout << "Experience : " << e2.emp_experience << endl;
    cout << "Company Name : " << e2.emp_company_name << endl;

    cout << endl
         << endl
         << "Output details of 3rd Employee - " << endl;

    cout << "Id : " << e3.emp_id << endl;
    cout << "Name : " << e3.emp_name << endl;
    cout << "Age : " << e3.emp_age << endl;
    cout << "Role : " << e3.emp_role << endl;
    cout << "Salary : " << e3.emp_salary << endl;
    cout << "City : " << e3.emp_city << endl;
    cout << "Experience : " << e3.emp_experience << endl;
    cout << "Company Name : " << e3.emp_company_name << endl;

    cout << endl
         << endl
         << "Output details of 4th Employee - " << endl;

    cout << "Id : " << e4.emp_id << endl;
    cout << "Name : " << e4.emp_name << endl;
    cout << "Age : " << e4.emp_age << endl;
    cout << "Role : " << e4.emp_role << endl;
    cout << "Salary : " << e4.emp_salary << endl;
    cout << "City : " << e4.emp_city << endl;
    cout << "Experience : " << e4.emp_experience << endl;
    cout << "Company Name : " << e4.emp_company_name << endl;

    cout << endl
         << endl
         << "Output details of 5th Employee - " << endl;

    cout << "Id : " << e5.emp_id << endl;
    cout << "Name : " << e5.emp_name << endl;
    cout << "Age : " << e5.emp_age << endl;
    cout << "Role : " << e5.emp_role << endl;
    cout << "Salary : " << e5.emp_salary << endl;
    cout << "City : " << e5.emp_city << endl;
    cout << "Experience : " << e5.emp_experience << endl;
    cout << "Company Name : " << e5.emp_company_name << endl;
}