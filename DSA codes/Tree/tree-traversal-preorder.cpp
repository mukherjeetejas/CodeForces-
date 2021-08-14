//Tree traversal inorder
//PRORDER => ROOT + LEFT SUBTREE + RIGHT SUBTREE
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

void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->key << '\t';
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    preorder(root);
}