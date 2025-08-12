#include <iostream>
using namespace std;

main()
{
    int row, col;

    cout << "Enter row : ";
    cin >> row;

    cout << "Enter column : ";
    cin >> col;

    int a[row][col], b[row][col];
    int merge[2*row][col];

    cout << endl
         << "First Array Input" << endl;
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
         << "Second Array Input" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter b[" << i << "][" << j << "] : ";
            cin >> b[i][j];
        }
        cout << endl;
    }

    cout << endl
         << "Array Output" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            merge[i][j] = a[i][j];
            merge[i + row][j] = b[i][j];
        }
    }

    for (int i = 0; i < 2 * row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << merge[i][j] << "\t";
        }
        cout << endl;
    }
}