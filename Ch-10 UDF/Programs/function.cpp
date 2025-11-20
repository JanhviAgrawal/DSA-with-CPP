#include <iostream>
using namespace std;

// Input Int
// TNRS
int inputInt()
{
    int n;
    cin >> n;

    return n;
}

// Array Outpt
// TSRN
void arrayOutput(int size, int array[])
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }
}

// Array Input
// TSRN
void arrayInput(int size, int array[])
{
    cout << endl
         << "Array Input" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] : ";
        array[i] = inputInt();
    }
    cout << endl;
}

// Array Element Sum
// TSRS
int arrayElementSum(int size, int array[])
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}