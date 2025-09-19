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

int LeafCount(Node *root, int k, vector<int> &ans)
{
    if (!root)
    {
        return 0;
    }
    if (!root->left && !root->right)
    {
        return 1;
    }
    // left leaf count
    int Left = LeafCount(root->left, k, ans);
    // right leaf count
    int Right = LeafCount(root->right, k, ans);

    if (k == Left + Right)
    {
        ans.push_back(root->data);
    }
    return Left + Right;
}

vector<int> btWithKleaves(Node *root, int k)
{
    // your code here.
    vector<int> ans;

    LeafCount(root, k, ans);
    if (ans.size() == 0)
    {
        return {-1};
    }
    return ans;
}