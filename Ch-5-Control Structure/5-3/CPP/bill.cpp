#include <iostream>
using namespace std;

main()
{
    float unit, bill, total, output;

    cout << "Enter Electricity unit: ";
    cin >> unit;

    if (unit <= 50 && unit > 0)
    {
        bill = unit * .5;
    }
    else if (unit >= 51 && unit <= 150)
    {
        bill = 25 + (unit - 50) * .75;
    }
    else if (unit >= 151 && unit <= 250)
    {
        bill = 100 + (unit - 150) * 1.20;
    }
    else if (unit > 250)
    {
        bill = 220 + (unit - 250) * 1.50;
    }

    total = bill * .20;
    output = total + bill;
    cout << "total Bill Charge : " << output;
}
