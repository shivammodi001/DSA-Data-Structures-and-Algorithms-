#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


class Solution {
  public:
    vector<int> leftView(Node *root) {
        vector<int> ans;
        if (root == nullptr) return ans;  // ✅ handle empty tree
        
        queue<Node*> q;
        q.push(root);
        
        while (!q.empty()) {
            int size = q.size();
            ans.push_back(q.front()->data);  // ✅ first element of this level (leftmost)
            
            // 🔹 Process all nodes of the current level
            // We need this second loop because each level can have multiple nodes.
            // 'size' tells us how many nodes are present at this level.
            // By processing all of them, we ensure the queue only holds the next level's nodes.
            while (size--) {
                Node *tmp = q.front();
                q.pop();
                
                if (tmp->left) {
                    q.push(tmp->left);
                }
                if (tmp->right) {
                    q.push(tmp->right);
                }
            }
        }
        return ans;
    }
};
