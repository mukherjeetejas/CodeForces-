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

Node *insertatend(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;
    else
    {
        Node *curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = temp;
        return head;
    }
}

int main()
{
    Node *head = new Node(2);
    head->next = new Node(0);
    cout << "Before insertion : ";
    printlist(head);
    int x;
    cout << "Enter element to insert at end : ";
    cin >> x;
    head = insertatend(head, x);
    cout << "After insertion : ";
    printlist(head);
}