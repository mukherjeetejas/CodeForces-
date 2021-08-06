//Author Tejas Mukherjee
//Implementation of linked list as a structure
// Print middle of linked list using 2 pointers tortoise and hare

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
        cout << curr->data << '\t';
        curr = curr->next;
    }
    cout << '\n';
}

int middlelinkedlist(Node *head)
{
    if (head == NULL)
        return -1;
    if (head->next == NULL)
        return head->data;
    Node *tortoise = head, *hare = head;
    while (hare->next != NULL && hare != NULL)
    {
        tortoise = tortoise->next;
        if (hare->next->next != NULL)
            hare = hare->next->next;
        else
            break;
    }
    return tortoise->data;
}

int main()
{
    Node *head = new Node(2);
    head->next = new Node(0);
    head->next->next = new Node(87);
    head->next->next->next = new Node(5);
    //head->next->next->next->next = new Node(23);

    printlist(head);
    cout << "middle element of linked list is : " << middlelinkedlist(head);
}