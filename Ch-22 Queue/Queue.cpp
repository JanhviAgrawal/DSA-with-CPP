#include <iostream>
using namespace std;

class Queue
{
public:
    virtual void enqueue(int element) = 0;
    virtual void dequeue() = 0;
    virtual void get_front() = 0;
    virtual void get_rear() = 0;
    virtual void display() = 0;
    virtual void isEmpty() = 0;
    virtual void isFull() = 0;
    virtual int size() = 0;
};

template <typename T>
class myQueue : public Queue
{
private:
    int *arr;
    int capacity;
    int front;
    int rear;
    int count;

public:
    myQueue(int capacity)
    {
        this->capacity = capacity;
        this->arr = new int[this->capacity];
        this->front = -1;
        this->rear = -1;
        this->count = 0;
    }

    ~myQueue()
    {
        delete[] arr;
    }

    void enqueue(int element)
    {
        // Checking Queue is overflowed... elements will be allowed till its capacity, after overflowed elements cant be added..
        if (this->rear == this->capacity - 1)
        {
            cout << "Queue is Overflow.";
        }
        // Adding 1st element in the Queue...
        else if (this->front == -1 && this->rear == -1)
        {
            this->front = 0;
            this->rear = 0;
            this->arr[this->rear] = element;
            this->count++;
        }
        // Adding remaining elements...
        else
        {
            this->rear++;
            this->arr[this->rear] = element;
            this->count++;
        }
    }

    void dequeue()
    {
        // checking if the queue is empty.. so there are no elements so cant remove anything...
        if (this->front == -1 && this->rear == -1)
        {
            cout << "Queue is Underflow..";
        }
        // removing the last element of the queue...
        else if (this->front == this->rear)
        {
            this->front = -1;
            this->rear = -1;
            this->count--;
        }
        // removing elements as FIFO(First In First Out)....
        else
        {
            this->front++;
            this->count--;
        }
    }

    void get_front()
    {
        (this->front == -1 && this->rear == -1)
            ? cout << "Queue is Empty.."
            : cout << "Front Element: " << this->arr[this->front];
    }

    void get_rear()
    {
        (this->front == -1 && this->rear == -1)
            ? cout << "Queue is Empty.."
            : cout << "Rear(Last) Element: " << this->arr[this->rear];
    }

    void display()
    {
        // empty or not
        if (this->front == -1 && this->rear == -1)
        {
            cout << "Queue is Empty..";
        }
        // Printing all the elements of the Queue
        else
        {
            for (int i = this->front; i <= this->rear; i++)
            {
                cout << this->arr[i] << " ";
            }
            cout << endl;
        }
    }

    void isEmpty()
    {
        cout << ((this->front == -1 && this->rear == -1) ? "Queue is Empty.." : "Queue is not Empty..");
    }

    void isFull()
    {
        cout << (this->rear == this->capacity - 1 ? "The Queue Is Full.." : "The Queue Is Not Full..");
    }

    int size()
    {
        return this->count;
    }
};