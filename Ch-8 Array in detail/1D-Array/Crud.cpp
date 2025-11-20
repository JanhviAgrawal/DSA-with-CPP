#include <iostream>
using namespace std;

main()
{
    // CRUD Operation
    // C = creat / insert(position - index) / push(from last - add)
    // R = read / fetch / retrive
    // U = update
    // D = delete(position - index) / pop(from last - delete)

    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int a[size];

    cout << endl
         << "Array Input" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }
    system("cls");

    int n, pos, element;
    do
    {
        cout << endl
             << endl
             << "CRUD Operation" << endl;
        cout << "Press 1 for Insert" << endl;
        cout << "Press 2 for Push" << endl;
        cout << "Press 3 for Fetch" << endl;
        cout << "Press 4 for Update" << endl;
        cout << "Press 5 for Delete" << endl;
        cout << "Press 6 for Pop" << endl;
        cout << "Press 0 for Exit" << endl;

        cin >> n;

        switch (n)
        {
        case 1:
            system("cls");
            cout << endl
                 << "Insert" << endl;
            cout << "Enter your Index: ";
            cin >> pos;
            cout << "Enter new element: ";
            cin >> element;
            if (pos < size && pos >= 0)
            {
                for (int i = size - 1; i >= pos; i--)
                {
                    a[i + 1] = a[i];
                }
                a[pos] = element;
                size++;
            }
            break;

        case 2:
            system("cls");
            cout << endl
                 << "Push" << endl;
            cout << "Enter Element : ";
            cin >> element;

            a[size] = element;
            size++;
            break;

        case 3:
            system("cls");
            cout << endl
                 << "Fetch" << endl;

            for (int i = 0; i < size; i++)
            {
                cout << a[i] << "\t";
            }
            break;

        case 4:
            system("cls");
            cout << endl
                 << "Update" << endl;

            cout << "Enter your index: ";
            cin >> pos;
            cout << "Enter element: ";
            cin >> element;

            if (pos < size && pos >= 0)
            {
                a[pos] = element;
            }
            break;

        case 5:
            system("cls");
            cout << endl
                 << "Delet" << endl;
            cout << "Enter your index: ";
            cin >> pos;

            if (pos < size && pos >= 0)
            {
                for (int i = pos; i < size; i++)
                {
                    a[i] = a[i + 1];
                }
                size--;
            }
            break;

        case 6:
            system("cls");
            cout << endl
                 << "Pop" << endl;
            size--;
            break;

        case 0:
            system("cls");
            cout << endl
                 << "Exit" << endl;
            break;

        default:
            system("cls");
            cout << endl
                 << "Invalid Choice";
            break;
        }
    } while (n != 0);
}