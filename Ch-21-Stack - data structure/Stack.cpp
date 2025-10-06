#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int size;
    int top;
    int len;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
        this->len = 0;
        cout << endl;
        cout << "Stack Created with Size: " << size << endl;
        cout << endl;
    }

    ~Stack()
    {
        delete[] arr;
        cout << endl;
        cout << "Stack Destroyed." << endl;
        cout << endl;
    }

    void push(int element)
    {
        cout << endl;
        if (this->top == this->size - 1)
        {
            cout << "Stack Overflow." << endl;
        }
        else
        {
            this->top++;
            this->arr[this->top] = element;
            this->len++;
            cout << "Element Pushed: " << element << endl;
        }
        cout << endl;
    }

    void pop()
    {
        cout << endl;
        if (this->top == -1)
        {
            cout << "Stack UnderFlow." << endl;
        }
        else
        {
            cout << "Element Popped: " << this->arr[this->top] << endl;
            this->top--;
            this->len--;
        }
        cout << endl;
    }

    void peek()
    {
        cout << endl;
        if (this->top == -1)
        {
            cout << "Stack is Empty." << endl;
        }
        else
        {
            cout << "Top Element: " << this->arr[this->top] << endl;
        }
        cout << endl;
    }

    void display()
    {
        cout << endl;
        if (this->top == -1)
        {
            cout << "Stack is Empty." << endl;
        }
        else
        {
            cout << "Stack Elements: ";
            for (int i = this->top; i >= 0; i--)
            {
                cout << this->arr[i] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    bool isEmpty()
    {
        cout << endl;
        return this->top == -1;
        cout << endl;
    }

    void isFull()
    {
        cout << endl;
        if (this->top == this->size - 1)
        {
            cout << "Stack is Full..." << endl;
        }
        else
        {
            cout << "Stack is not Full." << endl;
        }
        cout << endl;
    }

    void length()
    {
        cout << endl;
        cout << "Stack Length: " << this->len << endl;
        cout << endl;
    }
};