#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *insertion(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        head = temp;
        return head;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

Node *pop(Node *head, int data)
{
    Node *temp = head;
    if (head == NULL)
    {
        return head;
    }

    if (head->data == data)
    {
        head = head->next;
        return head;
    }
    while (temp->next != NULL)
    {
        if (temp->next->data == data)
        {
            Node *temp1 = temp->next;
            temp->next = temp->next->next;
            delete temp1;
            return head;
        }
        temp = temp->next;
    }
    return head;
}

Node *display(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << "->";
        node = node->next;
    }
    cout << "NULL" << endl;
    return node;
}

int main()
{
    Node *head = NULL;
    head = insertion(head, 10);
    head = insertion(head, 20);
    head = insertion(head, 30);
    head = insertion(head, 40);
    head = insertion(head, 50);
    head = insertion(head, 60);

    display(head);
    cout << "After pop 30" << endl;
    head = pop(head, 30);
    display(head);

    return 0;
}