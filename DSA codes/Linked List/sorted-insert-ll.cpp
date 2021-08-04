//Author Tejas Mukherjee
//Insert in Singly linked list in sorted manner

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

Node *insertSorted(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
        return temp;
    if (head->data > data)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL && curr->next->data < data)
    {
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

int main()
{
    Node *head = new Node(0);
    head->next = new Node(2);
    head->next->next = new Node(5);
    head->next->next->next = new Node(10);
    printlist(head);
    int data;
    cout << "Enter new element : ";
    cin >> data;
    head = insertSorted(head, data);
    printlist(head);
}