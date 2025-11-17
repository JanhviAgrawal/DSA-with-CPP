#include "function.cpp"

int main()
{

    int n;
    cout << "Enter Number of elements: ";
    cin >> n;

    vector<int> a;

    cout << "Enter elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cout << "Enter a[" << i << "] : ";
        cin >> element;
        a.push_back(element);
    }

    cout << "Elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    int choice;
    int index;
    do
    {
        cout << endl
             << endl;
        cout << "Enter 1 for Display Sorting." << endl;
        cout << "Enter 2 for Binary Search." << endl;
        cout << "Enter 0 for Exit." << endl;
        cout << "Enter your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            merge_sort(a, 0, n - 1);
            cout << "Sorted Elements: ";
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            break;

        case 2:
            int target;
            cout << endl
                 << "Enter search element : ";
            cin >> target;
            merge_sort(a, 0, n - 1);
            index = binary_search(a, 0, n - 1, target);
            (index == -1) ? cout << "Element Not Found..."
                          : cout << "Searched element index: " << index << endl;
            break;

        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid Choice..." << endl;
            break;
        }
    } while (choice != 0);
}