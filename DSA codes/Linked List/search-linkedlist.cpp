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

int searchlinkedlist(Node *head, int data)
{
    Node *curr = head;
    int i = 1;
    while (curr != NULL)
    {
        if (curr->data == data)
        {
            return i;
        }
        curr = curr->next;
        i++;
    }
    return -1;
}

int main()
{
    Node *head = new Node(21);
    head->next = new Node(12);
    head->next->next = new Node(5);
    cout << "Linked list : ";
    printlist(head);
    int data;
    cout << "enter element to search : ";
    cin >> data;
    cout << searchlinkedlist(head, data);
}