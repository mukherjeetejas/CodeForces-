//Tree Max element
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

int maxTree(Node *root)
{
    if (root == NULL)
        return INT_MIN;
    return max(root->key, max(maxTree(root->left), maxTree(root->right)));
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    postorder(root);
    cout << "\nMax of the tree is : " << maxTree(root);
}