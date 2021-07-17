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

void printlist(Node *head)
{
    if (head == NULL)
    {
        cout << '\n';
        return;
    }
    else
    {
        cout << head->data << '\t';
        printlist(head->next);
    }
}

Node *deletehead(Node *head)
{
    if (head == NULL)
    {
        cout << "linked list is already empty.";
        return NULL;
    }
    else
    {
        return head->next;
    }
}

int main()
{
    Node *head = new Node(21);
    head->next = new Node(12);
    head->next->next = new Node(5);
    cout << "Before deletion : ";
    printlist(head);
    cout << "After head deletion : ";
    head = deletehead(head);
    printlist(head);
}