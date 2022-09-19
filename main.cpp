#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int *arr;
    int front;
    int rear;
    int capacity;

public:
    Queue(int capacity)
    {
        this->capacity = capacity;
        arr = new int[capacity];
        front = -1;
        rear = -1;
    }

    bool isEmpty()
    {
        return front == rear;
    }

    bool isFull()
    {
        return rear + 1 == capacity;
    }

    void enqueue(int data)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
            return;
        }
        arr[rear] = data;
        rear = (rear + 1) % capacity;
    }

    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int data = arr[front];
        front = (front + 1) % capacity;
        return data;
    }

    void peak()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << arr[front] << endl;
    }

    void print()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue is: ";
        for (int i = front; i < rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{

    int n = 5;
    Queue cq(n);
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);
    cq.enqueue(60);

    cq.print();
    cout << "peak value is : ";
    cq.peak();

    // cq.dequeue();
    // cout << "dequeue" << endl;
    // cq.print();
    // cq.enqueue(60);
    // cout << "after enqueue" << endl;
    // cq.print();

    return 0;
}