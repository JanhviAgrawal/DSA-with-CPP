#include "function.cpp"

int main()
{
    List a;

    int choice;
    int element;
    int position;

    do
    {
        cout << "Enter 1 for Adding Element" << endl;
        cout << "Enter 2 for Deleting Element" << endl;
        cout << "Enter 3 for Displaying Element" << endl;
        cout << "Enter 4 for Reverse Element." << endl;
        cout << "Enter 5 for Searching Element." << endl;
        cout << "Enter 0 for Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << endl;
            cout << "Enter element: ";
            cin >> element;
            a.insert(element);
            break;

        case 2:
            cout << endl;
            cout << "Enter Index: ";
            cin >> position;
            a.deleten(position);
            break;

        case 3:
            cout << endl;
            cout << "Elements: ";
            a.display();
            cout<<endl;
            break;

        case 4:
            cout << endl;
            a.reverse();
            break;

        case 5:
            cout << "Enter position to search: ";
            cin >> position;
            a.search(position);
            break;

        case 0:
            cout << "Exiting..!" << endl;
            break;

        default:
            cout << "Invalid Choice..!" << endl;
            break;
        }
    } while (choice != 0);
}