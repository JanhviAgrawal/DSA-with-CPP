#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class List
{
private:
    Node *head;

public:
    List()
    {
        head = nullptr;
    }

    void insert(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        cout << "Inserted: " << value << endl;
    }

    void deleten(int position)
    {
        if (head == nullptr)
        {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }

        if (position == 0)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            cout << "Deleted node at position " << position << endl;
            return;
        }

        Node *current = head;
        Node *prev = nullptr;
        int count = 0;

        while (current != nullptr && count < position)
        {
            prev = current;
            current = current->next;
            count++;
        }

        if (current == nullptr)
        {
            cout << "Position " << position << " is out of range." << endl;
            return;
        }

        prev->next = current->next;
        delete current;
        cout << "Deleted node at position " << position << endl;
    }

    void display()
    {
        if (head == nullptr)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data;
            if (current->next != nullptr)
            {
                cout << " ";
            }
            current = current->next;
        }
        cout << endl;
    }
    void reverse()
    {
        if (head == nullptr)
        {
            cout << "List is empty. Nothing to reverse." << endl;
            return;
        }

        Node *prev = nullptr;
        Node *current = head;
        while (current != nullptr)
        {
            Node *nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        head = prev;
        cout << "List reversed." << endl;
    }
    void search(int position)
    {
        if (head == nullptr)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *current = head;
        int count = 0;

        while (current != nullptr)
        {
            if (count == position)
            {
                cout << "Value at position " << position << " is " << current->data << endl;
                return;
            }
            current = current->next;
            count++;
        }

        cout << "Invalid index." << endl;
    }
};

// MERGE SORTING
void merge(vector<int> &a, int start, int mid, int end)
{
    vector<int> temp;

    int i = start;
    int j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (a[i] <= a[j])
        {
            temp.push_back(a[i]);
            i++;
        }
        else
        {
            temp.push_back(a[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(a[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(a[j]);
        j++;
    }

    for (int i = 0; i < temp.size(); i++)
    {
        a[start + i] = temp[i];
    }
}

void merge_sort(vector<int> &a, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;

        merge_sort(a, start, mid);   // left
        merge_sort(a, mid + 1, end); // right

        merge(a, start, mid, end);
    }
}

// BINARY SEARCHING
int binary_search(vector<int> a, int start, int end, int target)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target < a[mid])
        {
            return binary_search(a, start, mid - 1, target);
        }
        else if (target > a[mid])
        {
            return binary_search(a, mid + 1, end, target);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}