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

Node *insertatpos(Node *head, int data, int pos)
{
    Node *temp = new Node(data);
    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }
    else
    {
        int i = 1;
        Node *curr = head;
        while (i != pos - 1)
        {
            i++;
            if (curr->next == NULL)
            {
                cout << "Linked list cannot skip any position : ";
                return head;
            }
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
        return head;
    }
}

int main()
{
    Node *head = new Node(21);
    head->next = new Node(12);
    head->next->next = new Node(5);
    cout << "Before deletion : ";
    printlist(head);
    int data, pos;
    cout << "enter element : ";
    cin >> data;
    cout << "enter position : ";
    cin >> pos;
    head = insertatpos(head, data, pos);
    printlist(head);
}