#include <bits/stdc++.h>
using namespace std;

int main()
{
    // today will talk about stack
    // stack is a data structure that follows LIFO
    // LIFO means last in first out
    // stack is a linear data structure
    // stack is a container that holds data
    // stack is a container that holds data and provides access in a LIFO order

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    // using emplace
    cout << "using emplace" << endl;

    stack<int> s2;

    s2.emplace(1);
    s2.emplace(2);
    s2.emplace(3);

    while (!s2.empty())
    {
        cout << s2.top() << endl;
        s2.pop();
    }

    return 0;
}