#include <bits/stdc++.h>
using namespace std; 

// doubly linked list node
class Node {
public:
    int data;
    Node* next;
    Node* prev;
};

// function to insert a new node at the
// beginning of the Doubly Linked List

Node *insert(Node *head, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = head;
    temp->prev = NULL;
    if (head != NULL)
        head->prev = temp;
    return temp;
}

Node *pop(Node *head , int data)
{
    Node *temp = head;
    while(temp->data != data)
    {
        temp = temp->next;
    }
    if(temp->prev != NULL)
    {
        temp->prev->next = temp->next;
    }
    else
    {
        head = temp->next;
    }
    if(temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    return head;
}
// function to print nodes in a given doubly linked list
void printList(Node* head)
{
    while (head != NULL) {
        cout << head->data << "->";
        head = head->next;
    }

    cout << "NULL" << endl;

}





int main()
{

    // doubly linked list

    Node* head = NULL;

    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);
    head = insert(head, 5);

    cout << "Doubly linked list is: " << endl;
    printList(head);

    head = pop(head, 3);
    cout << "Doubly linked list after pop is: " << endl;

    printList(head);
    
    return 0;
}