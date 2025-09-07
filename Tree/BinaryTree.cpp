#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left = NULL;
    Node *right = NULL;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *BinaryTree()
{
    int x;
    cout << "Enter data (-1 for no node): ";
    cin >> x;
    //-1 means no node
    if (x == -1)
        return NULL;

    // Create the root
    Node *root = new Node(x);
    /// left side;
    cout << "Enter left child of " << x << ": ";
    root->left = BinaryTree();
    // right Side
    cout << "Enter right child of " << x << ": ";
    root->right = BinaryTree();

    return root;
}

int main()
{
    Node *root = BinaryTree();
    return 0;
}