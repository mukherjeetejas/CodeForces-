//Tree traversal inorder
//POSTORDER => LEFT SUBTREE + RIGHT SUBTREE + ROOT
//Tejas K Mukherjee

#include <iostream>
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

void postorder(Node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->key << '\t';
}

void Kdistance(Node *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
    {
        cout << root->key << '\t';
    }
    else
    {
        Kdistance(root->left, k - 1);
        Kdistance(root->right, k - 1);
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    Kdistance(root, 1);
}