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
        left = NULL;
        right = NULL;
    }
};

void PreOrder(Node *root, vector<int> &ans, int level)
{
    if (!root)
        return;

    if (level % 2 == 1)
    {
        ans.push_back(root->data);
    }
    PreOrder(root->left, ans, level + 1);
    PreOrder(root->right, ans, level + 1);
}

vector<int> nodesAtOddLevels(Node *root)
{
    // code here
    vector<int> ans;
    int level = 1;
    PreOrder(root, ans, level);
    return ans;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> result = nodesAtOddLevels(root);
    for (int val : result)
    {
        cout << val << " ";
    }
    return 0;
}