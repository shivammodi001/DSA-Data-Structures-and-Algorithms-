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


// Inorder Traversal
void InorderTraversal(Node *root)
{
    // LNR
    if (!root)
        return;

    // traverse left first
    InorderTraversal(root->left);
    // print node data
    cout << root->data << " ";
    // traverse right
    InorderTraversal(root->right);
}

// PreOrder Traversal
void PreorderTraversal(Node* root){
    if(!root){
        return;
    }
    // NLR
    //print Node first
    cout << root->data << " ";
    // traverse left
    PreorderTraversal(root->left);
    // traverse right
    PreorderTraversal(root->right);
}

// PostOrder Traversal
void PostorderTraversal(Node* root){
    if(!root){
        return;
    }
    // traverse left
    PostorderTraversal(root->left);
    // traverse right
    PostorderTraversal(root->right);
    // print Node data
    cout << root->data << " ";
}


// Level Order Traversal
void LevelOrderTraversal(Node* root){
    if (!root) return;

    queue<Node*> q;
    q.push(root);   

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        cout << temp->data << " ";

        if (temp->left) q.push(temp->left);
        if (temp->right) q.push(temp->right);
    }
}
 


int main()
{
    Node *root = BinaryTree();
    cout << "Inorder Traversal: ";
    InorderTraversal(root);
    cout << "\nPreorder Traversal: ";
    PreorderTraversal(root);
    cout << "\nPostorder Traversal: ";
    PostorderTraversal(root);
    cout << "\nLevel Order Traversal: ";
    LevelOrderTraversal(root);
    return 0;
}