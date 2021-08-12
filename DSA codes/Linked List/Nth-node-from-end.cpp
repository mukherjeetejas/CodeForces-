//Author Tejas Mukherjee
//Nth element from last in a linked list in O(n)
//Using two pointers separated by N nodes

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

int displayNLast(Node *head, int n)
{
    Node *slow = head;
    Node *fast = head;
    for (int i = 0; i < n; i++)
    {
        fast = fast->next;
    }
    while (fast != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    return slow->data;
}

int main()
{
    Node *head = new Node(0);
    head->next = new Node(2);
    head->next->next = new Node(5);
    head->next->next->next = new Node(10);
    printlist(head);
    int n;
    cout << "Enter value of  N : ";
    cin >> n;
    cout << displayNLast(head, n) << '\n';
    printlist(head);
}