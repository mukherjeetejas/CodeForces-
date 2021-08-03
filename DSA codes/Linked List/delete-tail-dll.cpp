//Author Tejas Mukherjee
//Implementation of linked list as a structure
//delete tail of doubly linked list
// order of N, can become constant if tail pointer is maintained
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << '\t';
        curr = curr->next;
    }
    cout << '\n';
}

Node *deletetaildll(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->prev->next = NULL;
    delete curr;
    return head;
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    temp2->prev = temp1;
    temp1->prev = head;
    printlist(head);
    cout << "After head deletion : ";
    head = deletetaildll(head);
    printlist(head);
}