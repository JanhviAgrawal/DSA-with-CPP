#include <iostream>
#include <string.h>
using namespace std;

class Company
{
private:
    int comp_id;
    char comp_name[20];
    int comp_staff_quantity;
    int comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    char comp_ceo[20];

public:
    Company()
    {
        cout << "" << endl;
    }

    // Parameterized Constructor
    Company(int id, char name[], int staff, int revenue, int importD, int exportD, char ceo[])
    {
        comp_id = id;
        strcpy(comp_name, name);
        comp_staff_quantity = staff;
        comp_revenue = revenue;
        comp_import_raw_diamonds = importD;
        comp_export_diamonds = exportD;
        strcpy(comp_ceo, ceo);
    }

    // Setter
    void setCompanyData()
    {
        cout << endl
             << "Enter Company Id: ";
        cin >> comp_id;

        fflush(stdin);
        cout << "Enter Company Name: ";
        gets(comp_name);

        cout << "Enter Staff Quantity: ";
        cin >> comp_staff_quantity;

        cout << "Enter Revenue (per year): ";
        cin >> comp_revenue;

        cout << "Enter Imported Raw Diamonds (per year): ";
        cin >> comp_import_raw_diamonds;

        cout << "Enter Exported Diamonds (per year): ";
        cin >> comp_export_diamonds;

        fflush(stdin);
        cout << "Enter CEO Name: ";
        gets(comp_ceo);
    }

    // Getter
    void getCompanyData()
    {
        cout << endl
             << "Company Id: " << comp_id << endl;
        cout << "Company Name: " << comp_name << endl;
        cout << "Staff Quantity: " << comp_staff_quantity << endl;
        cout << "Revenue (per year): " << comp_revenue << endl;
        cout << "Imported Raw Diamonds (per year): " << comp_import_raw_diamonds << endl;
        cout << "Exported Diamonds (per year): " << comp_export_diamonds << endl;
        cout << "CEO Name: " << comp_ceo << endl;
    }
};

void handleCompanies()
{
    int size;
    cout << "Enter number of diamond companies: ";
    cin >> size;

    Company companies[size];

    for (int i = 0; i < size; i++)
    {
        cout << endl
             << "Entering data for Company " << i + 1;
        companies[i].setCompanyData();
    }

    for (int i = 0; i < size; i++)
    {
        cout << endl
             << "Company " << i + 1;
        companies[i].getCompanyData();
    }
}
