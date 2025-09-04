
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child

   */
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; 

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
  
  void Traverse(int &sum,Node* root){
      if(!root)return;
      
      sum+=root->data;
      Traverse(sum,root->left);
      Traverse(sum,root->right);
  }
    int sumBT(Node* root) {
        // code here
        int sum=0;
        Traverse(sum,root);
        return sum;
    }
};