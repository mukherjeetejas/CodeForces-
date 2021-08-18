//Tree traversal level order traversal line by line
//Level order traversal of tree using queue DS
//Tejas K Mukherjee
//Based on the fact that when the last node of the level is reachedthe next line is completely in the queue

#include <iostream>
#include <queue>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int data)
    {
        key = data;
        left = right = NULL;
    }
};

void levelordertraversal(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (q.size() > 1)
    {
        Node *curr = q.front();
        q.pop();
        if (curr == NULL)
        {
            q.push(NULL);
            cout << "\n";
            continue;
        }
        cout << curr->key << '\t';
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    levelordertraversal(root);
}