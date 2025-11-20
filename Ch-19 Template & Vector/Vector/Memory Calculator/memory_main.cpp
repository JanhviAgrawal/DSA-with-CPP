#include "Memory.cpp"
int main()
{
    Memory<int, string> manage;
    int choice, studentID;
    char studentName[50];

    do
    {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << endl
                 << "Enter Student ID: ";
            cin >> studentID;
            fflush(stdin);
            cout << "Enter Student Name: ";
            gets(studentName);

            string nameStr = studentName;
            manage.addStudent(studentID, nameStr);
            break;
        }

        case 2:
            cout << endl
                 << "Displaying all students..." << endl;
            manage.displayStudentData();
            break;

        case 3:
            cout << endl
                 << "Enter Student ID to remove: ";
            cin >> studentID;
            manage.removeStudentByID(studentID);
            break;

        case 4:
            cout << endl
                 << "Enter Student ID to search: ";
            cin >> studentID;
            manage.searchStudentByID(studentID);
            break;

        case 5:
            cout << endl
                 << "Total number of students: " << manage.getTotalStudents() << endl;
            break;

        case 6:
            cout << endl
                 << "Thank you for using the Student Management System!" << endl;
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << endl
                 << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 6);
}