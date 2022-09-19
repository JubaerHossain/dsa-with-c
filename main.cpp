#include <bits/stdc++.h>
using namespace std;

class CircularQueue
{
    int *arr;
    int front;
    int rear;
    int size;
    int capacity;

    public:
        CircularQueue(int capacity)
        {
            this->capacity = capacity;
            arr = new int[capacity];
            front = 0;
            rear = 0;
            size = 0;
        }

        void enqueue(int data)
        {
            if (size == capacity)
            {
                cout << "Queue is full" << endl;
                return;
            }
            arr[rear] = data;
            rear = (rear + 1) % capacity;
            size++;
        }

        int dequeue()
        {
            if (size == 0)
            {
                cout << "Queue is empty" << endl;
                return -1;
            }
            int data = arr[front];
            front = (front + 1) % capacity;
            size--;
            return data;
        }

        void print()
    {
        if (size == 0)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = front; i < front + size; i++)
        {
            cout << arr[i % capacity] << " ";
        }
        cout << endl;
    }
};

class Queue
{
private:
    int front;
    int rear;
    int size;
    int *Q;

public:
    Queue()
    {
        front = rear = -1;
        size = 10;
        Q = new int[size];
    }
    Queue(int size)
    {
        front = rear = -1;
        this->size = size;
        Q = new int[this->size];
    }
    void enqueue(int x);
    int dequeue();
    void Display();
};
void Queue::enqueue(int x)
{
    if (rear == size - 1)
        cout << "Queue is Full" << endl;
    else
    {
        rear++;
        Q[rear] = x;
    }
}
int Queue::dequeue()
{
    int x = -1;
    if (front == rear)
        cout << "Queue is Empty" << endl;
    else
    {
        x = Q[front + 1];
        front++;
    }
    return x;
}
void Queue::Display()
{
    for (int i = front + 1; i <= rear; i++)
        cout << Q[i] << " ";
    cout << endl;
}

int main()
{
    // circular queue
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.Display();

    q.dequeue();
    q.enqueue(50);

    cout << "after dequeue" << endl;
    q.Display();

    CircularQueue cq(5);
    cout << "circular queue" << endl;

    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);
    cq.enqueue(60);

    cq.print();

    cq.dequeue();
    cq.enqueue(60);

    cout << "after dequeue" << endl;
    cq.print();



    return 0;
}