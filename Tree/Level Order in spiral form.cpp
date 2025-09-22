// Given a root binary tree and the task is to find the spiral order traversal of the tree and return the list containing the elements.
// Spiral Order Traversal mean: Starting from level 0 for root node, for all the even levels we print the node's value from right to left and for all the odd levels we print the node's value from left to right.

// Examples:

// Input: root = [1, 3, 2]

// Output: [1, 3, 2]
// Explanation: Start with root (1), print level 0 (right to left), then level 1 (left to right).

// Input: root = [10, 20, 30, 40, 60]

// Output: [10, 20, 30, 60, 40]
// Explanation: Start with root (10), print level 0 (right to left), level 1 (left to right), and continue alternating.

// Spiral s

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *left;
    Node *right;
    int data;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

vector<int> findSpiral(Node *root)
{
    vector<int> ans;
    if (!root)
    {
        return ans;
    }
    queue<Node *> q;
    q.push(root);

    int level = 0;
    while (!q.empty())
    {
        vector<int> tmp;
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            Node *curr = q.front();
            q.pop();

            tmp.push_back(curr->data);
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }

        if(level%2==0){
            // even level -> right to left
            reverse(tmp.begin(), tmp.end());
        }
        //odd level -> left to right(no change)

        for(int i=0;i<tmp.size();i++){
            ans.push_back(tmp[i]);
        }
        level++;
    }
    return ans;
}
