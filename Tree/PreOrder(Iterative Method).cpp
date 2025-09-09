#include<bits/stdc++.h>
using namespace std;

//    Structure of Binary Tree Node
   struct Node {
       int data;
       Node* left;
       Node* right;
   };

class Solution {
  public:
    vector<int> preOrder(Node* root) {
        // Answer vector to store preorder traversal
        vector<int> ans;

        // If tree is empty, return empty vector
        if (!root) return ans;

        // Stack to simulate recursion
        stack<Node*> s;

        // Start traversal with root
        s.push(root);
        
        // Iterate until stack is empty
        while (!s.empty()) {
            // Get the top node from stack
            Node* top = s.top();
            s.pop();

            // Visit the node (preorder -> Root first)
            ans.push_back(top->data);
            
            /* 
               Push right child first, then left child.
               Why?
               → Because stack is LIFO (Last In First Out).
               → We want LEFT node to be processed before RIGHT node.
               → So we push RIGHT first, then LEFT on stack.
               → This ensures LEFT comes on top and is processed next.
            */
            if (top->right) {
                s.push(top->right);
            }
            if (top->left) {
                s.push(top->left);
            }
        }
        
        // Return the preorder traversal list
        return ans;
    }
};
