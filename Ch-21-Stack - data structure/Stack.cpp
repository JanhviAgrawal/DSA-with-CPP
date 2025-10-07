#include <iostream>
#define MAX 100
using namespace std;

template <typename T>
class Stack
{
private:
    T *arr;
    int size;
    int top;
    int len;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new T[size];
        this->top = -1;
        this->len = 0;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(T element)
    {
        if (this->top == this->size - 1)
        {
            cout << "Stack Overflow." << endl;
        }
        else
        {
            this->top++;
            this->arr[this->top] = element;
            this->len++;
        }
    }

    void pop()
    {
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
    }

    void peek()
    {
        if (this->top == -1)
        {
            cout << "Stack is Empty." << endl;
        }
        else
        {
            cout << "Top Element: " << this->arr[this->top] << endl;
        }
    }

    void display()
    {
        if (this->top == -1)
        {
            cout << "Stack is Empty." << endl;
        }
        else
        {
            cout << "Output : ";
            for (int i = this->top; i >= 0; i--)
            {
                cout << this->arr[i] << " ";
            }
            cout << endl;
        }
    }

    bool isEmpty()
    {
        return this->top == -1;
    }

    void isFull()
    {
        cout << (this->top == this->size - 1 ? "Stack is Full..." : "Stack is not Full.") << endl;
    }

    void length()
    {
        cout << "Stack Length: " << this->len << endl;
    }

    bool isPalindrom(string str)
    {
        for (char ch : str)
        {
            this->push(ch);
        }

        for (char ch : str)
        {
            if (ch != removed())
                return false;
        }
        return true;
    }

    char removed()
    {
        return (this->isEmpty()) ? ' ' : arr[top--];
    }
};