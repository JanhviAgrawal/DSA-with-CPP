#include <iostream>
using namespace std;

// Parent Class
class RBI
{
protected:
    double rate;

    RBI()
    {
        this->rate = 7.5; // Default rate of interest
    }

    // Calculate and return rate of interest for the bank
    double intCalc(double total_amount)
    {
        return (total_amount * rate) / 100;
    }
};

// Child Class 1 - SBI
class SBI : public RBI
{
private:
    double total_amount;

public:
    void setSBI()
    {
        cout << "Enter SBI total amount: ";
        cin >> this->total_amount;
    }

    // Print SBI output
    void getSBI()
    {
        double interest = intCalc(this->total_amount);
        cout << endl
             << "Interest charged: " << endl;
        cout << "SBI interest: " << interest << endl;
    }
};

// Child Class 2 - ICICI
class ICICI : public RBI
{
private:
    double total_amount;

public:
    void setICICI()
    {
        cout << "Enter ICICI total amount: ";
        cin >> this->total_amount;
    }

    // Print ICICI output
    void getICICI()
    {
        double interest = intCalc(this->total_amount);
        cout << "ICICI interest: " << interest << endl;
    }
};

// Child Class 3 - BOB (Bank of Baroda)
class BOB : public RBI
{
private:
    double total_amount;

public:
    void setBOB()
    {
        cout << "Enter BOB total amount: ";
        cin >> this->total_amount;
    }

    // Print BOB output
    void getBOB()
    {
        double interest = intCalc(this->total_amount);
        cout << "BOB interest: " << interest << endl;
    }
};
