#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *link;
};

struct Node* head = NULL;


void insert(int data)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->link = NULL;
    if(head == NULL){
        head = temp;
    }else{
        struct Node *t;
        t = head;
        while(t->link != NULL){
            t = t->link;
        }
        t->link = temp;
    }
}

void print(){
    struct Node *t;
    t = head;
    while(t != NULL){
        cout<<t->data<<"->";
        t = t->link;
    }
}

int main()
{
    Node *head = NULL;
    insert(1);
    insert(2);

    print();

    return 0;
}