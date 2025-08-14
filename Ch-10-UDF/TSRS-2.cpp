#include <iostream>
#include "function.cpp"
using namespace std;

int main()
{
    int size;
    cout << "Enter Number of elements: ";
    size = inputInt();

    int array[size];
    arrayInput(size, array);
    arrayOutput(size, array);

    cout << endl
         << endl
         << "Sum: " << arrayElementSum(size, array) << endl
         << endl;

    return 0;
}