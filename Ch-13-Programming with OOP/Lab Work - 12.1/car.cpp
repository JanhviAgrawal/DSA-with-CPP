#include <iostream>
using namespace std;

class Car
{
public:
    int car_id;
    char car_company_name[20];
    char car_color[20];
    char car_model[20];
    int car_release_year;
};

int main()
{
    // object
    Car car1, car2, car3, car4;

    cout << endl
         << "Input details of 1st Car - " << endl;
    cout << "Enter your car Id Number: ";
    cin >> car1.car_id;
    fflush(stdin);
    cout << "Enter your Car company name: ";
    gets(car1.car_company_name);
    fflush(stdin);
    cout << "Enter your car color: ";
    gets(car1.car_color);
    fflush(stdin);
    cout << "Enter your car model: ";
    gets(car1.car_model);
    cout << "Enter your car release year: ";
    cin >> car1.car_release_year;

    cout << endl
         << "Input details of 2nd Car - " << endl;
    cout << "Enter your car Id Number: ";
    cin >> car2.car_id;
    fflush(stdin);
    cout << "Enter your Car company name: ";
    gets(car2.car_company_name);
    fflush(stdin);
    cout << "Enter your car color: ";
    gets(car2.car_color);
    fflush(stdin);
    cout << "Enter your car model: ";
    gets(car2.car_model);
    cout << "Enter your car release year: ";
    cin >> car2.car_release_year;

    cout << endl
         << "Input details of 3rd Car - " << endl;
    cout << "Enter your car Id Number: ";
    cin >> car3.car_id;
    fflush(stdin);
    cout << "Enter your Car company name: ";
    gets(car3.car_company_name);
    fflush(stdin);
    cout << "Enter your car color: ";
    gets(car3.car_color);
    fflush(stdin);
    cout << "Enter your car model: ";
    gets(car3.car_model);
    cout << "Enter your car release year: ";
    cin >> car3.car_release_year;

    cout << endl
         << "Input details of 4th Car - " << endl;
    cout << "Enter your car Id Number: ";
    cin >> car4.car_id;
    fflush(stdin);
    cout << "Enter your Car company name: ";
    gets(car4.car_company_name);
    fflush(stdin);
    cout << "Enter your car color: ";
    gets(car4.car_color);
    fflush(stdin);
    cout << "Enter your car model: ";
    gets(car4.car_model);
    cout << "Enter your car release year: ";
    cin >> car4.car_release_year;

    cout << endl
         << endl
         << "Output Details of 1st Car - " << endl;
    cout << "Car Id: " << car1.car_id << endl;
    cout << "Company Name: " << car1.car_company_name << endl;
    cout << "Car Color: " << car1.car_color << endl;
    cout << "Car Model: " << car1.car_model << endl;
    cout << "Car release year: " << car1.car_release_year << endl;

    cout << endl
         << endl
         << "Output Details of 2nd Car - " << endl;
    cout << "Car Id: " << car2.car_id << endl;
    cout << "Company Name: " << car2.car_company_name << endl;
    cout << "Car Color: " << car2.car_color << endl;
    cout << "Car Model: " << car2.car_model << endl;
    cout << "Car release year: " << car2.car_release_year << endl;

    cout << endl
         << endl
         << "Output Details of 3rd Car - " << endl;
    cout << "Car Id: " << car3.car_id << endl;
    cout << "Company Name: " << car3.car_company_name << endl;
    cout << "Car Color: " << car3.car_color << endl;
    cout << "Car Model: " << car3.car_model << endl;
    cout << "Car release year: " << car3.car_release_year << endl;

    cout << endl
         << endl
         << "Output Details of 4th Car - " << endl;
    cout << "Car Id: " << car4.car_id << endl;
    cout << "Company Name: " << car4.car_company_name << endl;
    cout << "Car Color: " << car4.car_color << endl;
    cout << "Car Model: " << car4.car_model << endl;
    cout << "Car release year: " << car4.car_release_year << endl;
}