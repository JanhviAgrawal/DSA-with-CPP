#include <iostream>
#include "functions.cpp"
using namespace std;

int main()
{
     int n, num1, num2;

     do
     {
          cout << "Calculation..." << endl;
          cout << "Press 1 for + (Addition)" << endl;
          cout << "Press 2 for - (Substraction)" << endl;
          cout << "Press 3 for * (Multiplication)" << endl;
          cout << "Press 4 for / (Division)" << endl;
          cout << "Press 5 for % (Modulus)" << endl;
          cout << "Press 0 for Exit " << endl;
          cout << "Enter your Choice : ";
          cin >> n;

          switch (n)
          {
          case 1:
               system("cls");
               cout << "Addition..." << endl
                    << endl;
               inputNumbers(num1, num2);
               cout << "Addition : " << addNumbers(num1, num2) << endl
                    << endl;
               break;

          case 2:
               system("cls");
               cout << "Subtraction..." << endl
                    << endl;
               inputNumbers(num1, num2);
               cout << "Subtraction : " << subtractNumbers(num1, num2) << endl
                    << endl;
               break;

          case 3:
               system("cls");
               cout << "Multiplication..." << endl
                    << endl;
               inputNumbers(num1, num2);
               cout << "Multiplication : " << multiplyNumbers(num1, num2) << endl
                    << endl;
               break;

          case 4:
               system("cls");
               cout << "Division..." << endl
                    << endl;
               inputNumbers(num1, num2);
               cout << "Division : " << divisionNumbers(num1, num2) << endl
                    << endl;
               break;

          case 5:
               system("cls");
               cout << "Modulus..." << endl
                    << endl;
               inputNumbers(num1, num2);
               cout << "Modulus: " << modulusNumbers(num1, num2) << endl
                    << endl;
               break;

          case 0:
               cout << endl
                    << "Exiting..." << endl;
               break;

          default:
               cout << "Invalid option. Try again." << endl;
          }

     } while (n != 0);

     return 0;
}