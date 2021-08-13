//Author Tejas Mukherjee
/* Floyd Cycle Detection Algorithm
Distance between slow and fast increases by 1 in every iteration
A point comes when 
length of loop = distance between the pointers
[at this time they will be pointing to the same node]
 */

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

void removeloop(Node *head)
{
    //detect loop using floyd cycle detection
    Node *fast = head;
    Node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
            break;
    }
    if (fast != slow)
        return;
    slow = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = NULL;
}

bool loop(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}

int main()
{
    Node *head = new Node(0);
    head->next = new Node(2);
    head->next->next = new Node(5);
    head->next->next->next = new Node(10);
    head->next->next->next->next = head->next;
    cout << loop(head) << '\t';
    removeloop(head);
    cout << loop(head) << '\t';
}