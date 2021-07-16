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
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << '\n';
        curr = curr->next;
    }
}

int main()
{
    Node *head = new Node(2);
    head->next = new Node(0);
    head->next->next = new Node(5);
    head->next->next->next = new Node(5);

    printlist(head);
}