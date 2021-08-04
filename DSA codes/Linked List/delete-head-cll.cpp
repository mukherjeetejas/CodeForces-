//Insert new end
//the naive solution is theta n by traversing the ll
//efficient way is to add a new node after head and swap their values, the new node is the new head too
// similar logic as above

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

//Delete head of CLL in constant time
Node *deleteHeadCll(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == head)
    {
        delete (head);
        return NULL;
    }
    Node *temp = head->next;
    head->data = head->next->data;
    head->next = head->next->next;
    delete (temp);
    return head;
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
    cout << "After head deletion : ";
    head = deleteHeadCll(head);
    printclist(head);
}