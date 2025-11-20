#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <typename T1, typename T2>
class Memory
{
private:
    vector<T1> stdID;
    vector<T2> stdName;

public:
    void addStudent(const T1 &id, const T2 &name)
    {
        stdID.push_back(id);
        stdName.push_back(name);
        cout << "Student added successfully!" << endl;
    }

    void displayStudentData()
    {
        if (stdID.empty())
        {
            cout << "No students available." << endl;
        }

        cout << "------ Student List ------" << endl;
        for (int i = 0; i < (int)stdID.size(); ++i)
        {
            cout << "ID: " << stdID[i] << " | Name: " << stdName[i] << endl;
        }
    }

    void removeStudentByID(T1 &id)
    {
        for (int i = 0; i < (int)stdID.size(); ++i)
        {
            if (stdID[i] == id)
            {
                stdID.erase(stdID.begin() + i);
                stdName.erase(stdName.begin() + i);
                cout << "Student with ID " << id << " removed successfully!" << endl;
            }
        }
        cout << "Student with ID " << id << " not found!" << endl;
    }

    void searchStudentByID(T1 &id)
    {
        for (int i = 0; i < (int)stdID.size(); ++i)
        {
            if (stdID[i] == id)
            {
                cout << "Student found!" << endl;
                cout << "ID: " << stdID[i] << " | Name: " << stdName[i] << endl;
            }
        }
        cout << "Student with ID " << id << " not found!" << endl;
    }

    int getTotalStudents()
    {
        return stdID.size();
    }

    bool isEmpty()
    {
        return stdID.empty();
    }
};

void displayMenu()
{
    cout << endl
         << "===== MENU =====" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. Display All Students" << endl;
    cout << "3. Remove Student by ID" << endl;
    cout << "4. Search Student by ID" << endl;
    cout << "5. Get Total Number of Students" << endl;
    cout << "6. Exit" << endl;
}