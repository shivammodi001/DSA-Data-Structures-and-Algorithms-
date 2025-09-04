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
    };
};

// approach for identical trees
// two trees are identical if
// 1. both are empty
// 2. both are non-empty and their data is the same
// 3. their left and right subtrees are identical
bool isIdentical(Node *root1, Node *root2)
{
    // check for empty case -> Indentical
    if(!root1 && !root2){
        return 1; 
    }

    // if root1 is not null and root2 is null
    if(root1 && !root2){
        return 0; 
    }

    // if root1 is null and root2 is not null
    if(!root1 && root2){
        return 0; 
    }

    // check for data case
    if(root1->data != root2->data){
        return 0; 
    }
    return isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right);
}