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
    vector<int> largestValues(Node *root)
    {
        vector<int> result;
        if (!root)
            return result; // Empty tree -> return empty vector

        queue<Node *> q;
        q.push(root);

        // Standard BFS level order traversal
        while (!q.empty())
        {
            int n = q.size(); // Number of nodes in current level
            int levelMax = INT_MIN;

            // Traverse all nodes in current level
            for (int i = 0; i < n; i++)
            {
                Node *curr = q.front();
                q.pop();

                // Update level maximum
                levelMax = max(levelMax, curr->data);

                // Push children into queue
                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
            }

            // Store maximum of this level
            result.push_back(levelMax);
        }

        return result;
    }
};
