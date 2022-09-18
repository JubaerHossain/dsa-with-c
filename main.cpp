#include <bits/stdc++.h>
using namespace std;

int main()
{
    // today talk about queue
    // queue is a data structure that follows the first in first out principle
    // it is a linear data structure
    // it is a container that holds elements
    queue<int> q;
    q.push(1);
    q.push(20);
    q.push(3);
    q.push(4);
    q.push(5);
    while (!q.empty())
    {

        cout << q.front() << " ";
        q.pop();
    }

    vector<int> values = {1, 2, 3, 4, 5};

    cout << endl;
    queue<int> q1;
    for (int i = 0; i < values.size(); i++)
    {
        q1.push(values[i]);
    }

    while (!q1.empty())
    {

        cout << q1.front() << " ";
        q1.pop();
    }

    // enqueue
    


    // dequeue



    return 0;
}