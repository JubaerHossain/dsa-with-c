#include <bits/stdc++.h>
using namespace std;

class CircularQueue
{
    int *arr;
    int front;
    int rear;
    int capacity;

public:
    CircularQueue(int capacity)
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

class Queue
{
    int *arr;
    int capacity;
    int front,rear;

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
        if(isFull())
        {
            cout << "Queue is full" << endl;
            return;
        }
        arr[rear++] = data;
    }

    int dequeue()
    {
        if(isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front++];

    }

    void peak()
    {
        if(isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << arr[front] << endl;
    }

    void print()
    {
        if(isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue is: ";
        for(int i = front; i < rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{



    int n = 5;

    Queue q(n);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.print();

    cout << "Circular Queue are :   " << endl;
    CircularQueue cq(n);
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