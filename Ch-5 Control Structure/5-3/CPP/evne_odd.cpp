#include <iostream>
using namespace std;

main()
{
    int num;
    cout<<"Enter a number: ";
    cin>> num;

    if(num % 2 == 0){
        if(num % 5 == 0){
            cout<< num << " is even number and divisible by 5.";
        }
        else{
            cout << num << " is even number but not divisible 5.";
        }
    }
    else{
        if(num % 5 == 0){
            cout<< num << " is odd number and divisible by 5.";
        }
        else{
            cout<< num << " is odd number but not divisible by 5.";
        }
    }
}