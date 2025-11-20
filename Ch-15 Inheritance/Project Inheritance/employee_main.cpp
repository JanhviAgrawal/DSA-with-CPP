#include "Employee.cpp"

int main()
{
    D employee;

    employee.setData();
    employee.setSalaryExperience();
    employee.setCompanyDetails();
    employee.setContactDetails();

    cout << endl
         << "Employee Information: " << endl;
    employee.getData();
    employee.getSalaryExperience();
    employee.getCompanyDetails();
    employee.getContactDetails();
}