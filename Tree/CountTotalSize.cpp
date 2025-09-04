#include<bits/stdc++.h>
using namespace std;

/*
Definition for Binary Tree Node
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

class Solution {
  public:
  void Traverse(int &count , Node* root){
      if(!root){
          return;
      }
      Traverse(count, root->left);
      count++;
      Traverse(count, root->right);
  }
  
  int getSize(Node* node) {
      int count = 0;
      Traverse(count, node);  // ✅ use node instead of root
      return count; 
  }
};
