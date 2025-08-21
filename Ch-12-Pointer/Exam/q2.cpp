#include <iostream>
using namespace std;

void printCubes(int *ptr, int row, int col)
{
    cout << endl
         << "Cubes of all elements: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int val = *(ptr + i * col + j);
            cout << val * val * val << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int row, col;

    cout << "Enter number of rows: ";
    cin >> row;

    cout << "Enter number of columns: ";
    cin >> col;

    int *a = new int[row * col];

    cout << endl
         << "Input array elements: " << endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> *(a + i * col + j);
        }
    }

    printCubes(a, row, col);
}
