//Insert new end
//the naive solution is theta n by traversing the ll
//efficient way is to add a new node after head and swap their values, the new node is the new head too

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

//Insert tail in constant time
Node *inserttailcll(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    Node *forswap = head->next;
    head->next = temp;
    temp->next = forswap;
    int t = head->data;
    head->data = temp->data;
    temp->data = t;
    return temp;
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
    int data;
    cout << "enter new tail : ";
    cin >> data;
    head = inserttailcll(head, data);
    printclist(head);
}