#include "function.cpp"

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a;
    cout << "Enter Elements: " << endl;
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
             << "Enter 1 for Selection Sort" << endl;
        cout << "Enter 2 for Merge Sort" << endl;
        cout << "Enter 3 for Linear Search" << endl;
        cout << "Enter 4 for Binary Search" << endl;
        cout << "Enter 0 for Exit" << endl
             << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            selectionSort(a, n);
            cout << "Sorted Array with Selection Sort Desending Order: ";
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            break;

        case 2:
            mergeSort(a, 0, n - 1);
            cout << "Sorted Array with Merge Sort Asending Order: ";
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            break;

        case 3:
            index = linearSearch(a, n);
            (index == -1) ? cout << endl
                                 << "Element Not Found..!"
                          : cout << "Searched Element Index : " << index << endl;
            break;

        case 4:
            int target;
            cout << endl
                 << "Enter search element : ";
            cin >> target;
            mergeSort(a, 0, n - 1);
            index = binarySearch(a, 0, n - 1, target);
            (index == -1) ? cout << "Element Not Found..."
                          : cout << "Searched element index: " << index << endl;
            break;

        case 0:
            cout << "Exiting...!!" << endl;
            break;

        default:
            cout << "Invalid Choice..." << endl;
            break;
        }
    } while (choice != 0);
}