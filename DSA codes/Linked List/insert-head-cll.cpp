//Print circular linked list
//Author Tejas Mukherjee
//Implementation of linked list as a structure

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printclist(Node *head)
{
    if (head == NULL)
        return;
    cout << head->data << '\t';
    Node *curr = head->next;
    while (curr != head)
    {
        cout << curr->data << '\t';
        curr = curr->next;
    }
    cout << '\n';
}

//Insert head
Node *insertheadcll(Node *head, int data)
{
    Node *newhead = new Node(data);
    if (head == NULL)
    {
        newhead->next = newhead;
        return newhead;
    }
    newhead->next = head;
    if (head->next == head)
    {
        head->next = newhead;
        return newhead;
    }
    Node *curr = head->next;
    while (curr->next != head)
    {
        curr = curr->next;
    }
    curr->next = newhead;
    return newhead;
}

int main()
{
    Node *head = new Node(2);
    head->next = head;
    head->next = new Node(0);
    head->next->next = new Node(5);
    head->next->next->next = new Node(9);
    head->next->next->next->next = head;
    printclist(head);
    int data;
    cout << "enter new head : ";
    cin >> data;
    head = insertheadcll(head, data);
    printclist(head);
}