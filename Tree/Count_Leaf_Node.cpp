#include<bits/stdc++.h>
using namespace std;
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node
{
    int data;
    Node* left;
    Node* right;
    }; 

// Class Solution
class Solution {
  public:
  void Traverse(int &count , Node* root){
      if(!root){
          return;
      }
      if(!root->left && !root->right){
          count++;
      }
      Traverse(count,root->left);
      Traverse(count,root->right);
  }
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        // write code here
        int count=0;
        Traverse(count,root);
        return count;
    }
};