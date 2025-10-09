#include "Queue.cpp"

int main()
{
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    myQueue<int> queue(size);

    int choice;
    int element;

    do
    {
        cout << endl;
        cout << "Press 1 for Enqueue Operation." << endl;
        cout << "Press 2 for Dequeue Operation." << endl;
        cout << "Press 3 for Front Operation." << endl;
        cout << "Press 4 for Rear Operation." << endl;
        cout << "Press 5 for Display Operation." << endl;
        cout << "Press 6 for isEmpty Operation." << endl;
        cout << "Press 7 for isFull Operation." << endl;
        cout << "Press 8 for Size Operation." << endl;
        cout << "Press 0 for Exit..." << endl
             << endl;
        cout << "Enter your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter any element: ";
            cin >> element;
            queue.enqueue(element);
            break;

        case 2:
            queue.dequeue();
            break;

        case 3:
            queue.get_front();
            break;

        case 4:
            queue.get_rear();
            break;

        case 5:
            queue.display();
            break;

        case 6:
            queue.isEmpty();
            break;

        case 7:
            queue.isFull();
            break;

        case 8:
            cout << endl
                 << "Length of Queue : " << queue.size() << endl;
            break;

        case 0:
            cout << "Exiting Sayonara..!!";
            break;

        default:
            cout << "Invalid Choice..!";
            break;
        }

    } while (choice != 0);
}