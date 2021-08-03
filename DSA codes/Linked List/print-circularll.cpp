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
}

int main()
{
    Node *head = new Node(2);
    head->next = new Node(0);
    head->next->next = new Node(5);
    head->next->next->next = new Node(9);
    head->next->next->next->next = head;

    printclist(head);
}