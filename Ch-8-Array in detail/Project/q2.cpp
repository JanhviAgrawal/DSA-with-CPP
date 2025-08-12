#include <iostream>
using namespace std;

main()
{
    // largest element in 2D Array

    int row, col;
    cout << "Enter number of rows: ";
    cin >> row;

    cout << "Enter number of columns: ";
    cin >> col;

    int a[row][col];

    cout << endl
         << "Array Input" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    cout << endl
         << "Array Output";

    int max = a[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
        cout << endl;
    }
    cout << "Largest element in the array is: " << max << endl;
}