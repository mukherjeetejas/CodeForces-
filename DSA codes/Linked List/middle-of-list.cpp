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

int middleOfList(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    if (head != NULL)
    {
        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow->data;
    }
    return -1;
}

int main()
{
    Node *head = new Node(21);
    head->next = new Node(12);
    head->next->next = new Node(5);
    head->next->next->next = new Node(8);
    head->next->next->next->next = new Node(123);
    cout << "Linked list : ";
    printlist(head);
    cout << "Middle of the list is : " << middleOfList(head);
}