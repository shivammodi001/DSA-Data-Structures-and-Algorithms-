#include <bits/stdc++.h>
using namespace std;

/*Structure of the node of the tree is as
*/
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
  public:
  void Traverse(int &count , Node* root){
      if(!root){
          return;
      }
      if(!root->left && !root->right){
          return;
      }
      count++;
      Traverse(count,root->left);
      Traverse(count,root->right);
  }
    int countNonLeafNodes(Node* root) {
        // Code here
        int nonLeaf = 0;
        Traverse(nonLeaf,root);
        return nonLeaf;
    }
};