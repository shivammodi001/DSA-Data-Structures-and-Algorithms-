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
        left = right = NULL;
    };
};

vector<int> inOrder(Node *root)
{
    stack<Node *> s;
    vector<int> ans;
    Node *curr = root;

    while (!s.empty() || curr != NULL)
    {
        while (curr != NULL)
        {
            // pahle left ka element push karte jao until you find NULL
            s.push(curr);
            curr = curr->left;
        }

        // ab stack ke top par leftmost node ka parent h
        Node *top = s.top();
        s.pop();
        ans.push_back(top->data);

        // ab right subtree par move karo
        curr = top->right;
    }
    return ans;
}