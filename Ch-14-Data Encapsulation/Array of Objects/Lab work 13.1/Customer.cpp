#include <iostream>
#include <string.h>
using namespace std;

class Customer
{
private:
    int cust_id;
    char cust_name[20];
    int cust_age;
    char cust_city[20];
    long long int cust_mobile_number;
    int cust_simcard_validity;
    char cust_telecom_brand_name[20];

public:
    // Setter
    void setCustomerData()
    {
        cout << "Enter Customer id: ";
        cin >> this->cust_id;
        fflush(stdin);
        cout << "Enter Customer Name: ";
        gets(this->cust_name);
        cout << "Enter Customer Age: ";
        cin >> this->cust_age;
        cout << "Enter Customer City Name: ";
        cin >> this->cust_city;
        cout << "Enter Customer Mobile Number: ";
        cin >> this->cust_mobile_number;
        cout << "Enter Customer SimCard Validity: ";
        cin >> this->cust_simcard_validity;
        fflush(stdin);
        cout << "Enter Customer Telecom Brand Name: ";
        gets(this->cust_telecom_brand_name);
    }

    // Getter
    void getCustomerData()
    {
        cout << endl
             << "Customer id: " << this->cust_id << endl;
        cout << "Customer Name: " << this->cust_name << endl;
        cout << "Customer Age: " << this->cust_age << endl;
        cout << "Customer City: " << this->cust_city << endl;
        cout << "Customer Mobile number: " << this->cust_mobile_number << endl;
        cout << "Customer SimCard Validity: " << this->cust_simcard_validity << endl;
        cout << "Customer Telecom Brand Name: " << this->cust_telecom_brand_name << endl;
    }
};