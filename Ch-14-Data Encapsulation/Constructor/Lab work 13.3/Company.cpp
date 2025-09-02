#include <iostream>
#include <string.h>
using namespace std;

class Company
{
private:
    int comp_id;
    char comp_name[20];
    int comp_staff_quantity;
    double comp_revenue;
    double comp_import_raw_diamonds;
    double comp_export_diamonds;
    char comp_ceo[20];

public:
    Company(int id, string name, int staff_qty, double revenue, int import_diamonds, int export_diamonds, string ceo)
    {
        comp_id = id;
        comp_name = name;
        comp_staff_quantity = staff_qty;
        comp_revenue = revenue;
        comp_import_raw_diamonds = import_diamonds;
        comp_export_diamonds = export_diamonds;
        comp_ceo = ceo;
    }

    void displayCompanyData()
    {
        cout << "Company ID: " << this->comp_id << endl;
        cout << "Company Name: " << this->comp_name << endl;
        cout << "Staff Quantity: " << this->comp_staff_quantity << endl;
        cout << "Annual Revenue: $" << this->comp_revenue << endl;
        cout << "Raw Diamonds Imported: " << this->comp_import_raw_diamonds << " per year" << endl;
        cout << "Diamonds Exported: " << this->comp_export_diamonds << " per year" << endl;
        cout << "CEO: " << this->comp_ceo << endl;
        cout << "----------------------------" << endl;
    }
};