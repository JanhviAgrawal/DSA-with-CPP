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

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter b[" << i << "][" << j << "] : ";
            cin >> b[i][j];
        }
        cout << endl;
    }

    int sum[row][col];
    cout << endl
         << "Array Output" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }
}