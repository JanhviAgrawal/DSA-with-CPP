#include <iostream>
using namespace std;

main()
{
    int marks;
    char grade;

    cout << "Enter Your Marks: ";
    cin >> marks;

    (marks >= 91 && marks <= 100) ? (grade = 'A', cout << "Grade A1" << endl) : (marks >= 81 && marks <= 90) ? (grade = 'A', cout << "Grade A2" << endl)
                                                                            : (marks >= 71 && marks <= 80)   ? (grade = 'B', cout << "Grade B" << endl)
                                                                            : (marks >= 61 && marks <= 70)   ? (grade = 'C', cout << "Grade C" << endl)
                                                                            : (marks >= 51 && marks <= 60)   ? (grade = 'D', cout << "Grade D" << endl)
                                                                            : (marks >= 41 && marks <= 50)   ? (grade = 'E', cout << "Grade E" << endl)
                                                                            : (marks >= 0 && marks <= 40)    ? (grade = 'F', cout << "Grade F" << endl)
                                                                                                             : (grade = 'X', cout << "Invalid marks.. please try again.." << endl);

    // statement
    switch (grade)
    {
    case 'A':
        cout << "Excellent Work" << endl;
        break;
    case 'B':
        cout << "Well done" << endl;
        break;
    case 'C':
        cout << "Good Job" << endl;
        break;
    case 'D':
        cout << "You Passed" << endl;
        break;
    case 'E':
        cout << "You passed but you can do better" << endl;
        break;
    case 'F':
        cout << "Sorry You Failed.." << endl;
        break;
    }

    // eligibility

    if (marks >= 41 && marks <= 100)
    {
        cout << "Congratulations! You are eligible for the next level." << endl;
    }
    else if (marks >= 0 && marks <= 40)
    {
        cout << "Better luck next time." << endl;
    }
    else
    {
        cout << "Invalid marks.. please try again.." << endl;
    }
}