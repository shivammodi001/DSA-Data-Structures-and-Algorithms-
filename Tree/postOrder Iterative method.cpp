#include <bits/stdc++.h>
using namespace std;

// /* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

class Solution {
  public:
    vector<int> postOrder(Node* root) {
        vector<int> ans;
        if (!root) return ans;   // Empty tree case

        stack<Node*> s;
        s.push(root);

        /*
           IDEA:
           - Normal Postorder = Left → Right → Node (LRN).
           - If we do modified Preorder = Node → Right → Left (NRL),
             and then reverse it → we get Postorder.
           
           Why?
           - Preorder is Root → Left → Right.
           - If we swap order (Root → Right → Left) and then reverse the result,
             it matches Left → Right → Root (Postorder).
        */

        while (!s.empty()) {
            Node* top = s.top();
            s.pop();

            // First add current node (N part)
            ans.push_back(top->data);

            // Push LEFT after RIGHT because stack is LIFO
            // We want N → R → L order in ans
            if (top->left) {
                s.push(top->left);
            }
            if (top->right) {
                s.push(top->right);
            }
        }

        // Reverse the NRL order to get LRN (postorder)
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
