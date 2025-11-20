#include <iostream>
using namespace std;

main()
{
    int marks;

    cout << "Enter Your Marks: ";
    cin >> marks;
    cout << endl;

    if (marks >= 91 && marks <= 100)
    {
        cout << "Grade = A1";
    }
    else if (marks >= 81 && marks <= 90)
    {
        cout << "Grade = A2";
    }
    else if (marks >= 71 && marks <= 80)
    {
        cout << "Grade = B1";
    }
    else if (marks >= 61 && marks <= 70)
    {
        cout << "Grade = B2";
    }
    else if (marks >= 51 && marks <= 60)
    {
        cout << "Grade = C1";
    }
    else if (marks >= 41 && marks <= 50)
    {
        cout << "Grade = C2";
    }
    else if (marks >= 33 && marks <= 40)
    {
        cout << "Grade = D";
    }
    else if (marks >= 0 && marks <= 32)
    {
        cout << "Fail..";
    }
    else
    {
        cout << "Invalid marks.. please try again............";
    }
}