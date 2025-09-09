#include <bits/stdc++.h>
using namespace std;

// Structure of Node in Binary Tree:
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class Solution
{
public:
    // Recursive function to find maximum difference between ancestor and node
    void findMaxAnc(Node *root, int Max_Anc, int &diff)
    {
        // Base case: if node is NULL, return
        if (!root)
            return;

        // Update the maximum difference found so far
        // Max_Anc = maximum ancestor value encountered till now
        // root->data = current node value
        diff = max(diff, Max_Anc - root->data);

        // Update maximum ancestor value for further recursive calls
        Max_Anc = max(Max_Anc, root->data);

        // Recur for left and right subtrees
        findMaxAnc(root->left, Max_Anc, diff);
        findMaxAnc(root->right, Max_Anc, diff);
    }

    int maxDiff(Node *root)
    {
        // If tree is empty or only root node exists
        if (!root)
            return 0;

        // Initialize difference with INT_MIN
        int diff = INT_MIN;

        // Start recursion from root’s left and right child
        // considering root->data as the maximum ancestor initially
        findMaxAnc(root->left, root->data, diff);
        findMaxAnc(root->right, root->data, diff);

        return diff;
    }
};
