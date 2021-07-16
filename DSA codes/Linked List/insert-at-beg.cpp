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

Node *insertatbegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

int main()
{
    Node *head = new Node(2);
    head->next = new Node(0);
    head->next->next = new Node(5);
    head->next->next->next = new Node(5);
    cout << "Before insertion : ";
    printlist(head);
    int x;
    cout << "Enter element to insert at beginning : ";
    cin >> x;
    head = insertatbegin(head, x);
    cout << "After insertion : ";
    printlist(head);
}