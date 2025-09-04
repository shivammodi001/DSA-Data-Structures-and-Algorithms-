#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

int Diameter(int &d, Node *root)
{
    // just count height edge count between two leaf node
    if (!root)
        return 0;

    // left height from current node
    int leftHeight = Diameter(d, root->left);
    // right height from current node
    int rightHeight = Diameter(d, root->right);

    // Update diameter (max of current diameter and path through root)
    d = max(d, leftHeight + rightHeight);

    // Return height of this subtree
    return 1 + max(leftHeight, rightHeight);
}

int diameter(Node *root)
{
    int dia = 0;
    Diameter(dia, root);
    return dia;
}
