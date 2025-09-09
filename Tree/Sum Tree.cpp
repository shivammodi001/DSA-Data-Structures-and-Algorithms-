#include<bits/stdc++.h>
using namespace std;


// Input:
//     3
//   /   \    
//  1     2
// Output: true
// Explanation: The sum of left subtree and right subtree is 1 + 2 = 3, which is the value of the root node. Therefore,the given binary tree is a sum tree.
struct Node
{
    int data;
    Node* left, * right;
}; 

// Should return true if tree is Sum Tree, else false
class Solution {
  public:
  
    
    int SumTree(Node *root,int &ans){
        if(!root) return 0;
        
        //handle leaf node condition
        if(root->left==NULL && root->right==NULL){
            return root->data;
        }
        
        
        //left sum
        int left = SumTree(root->left,ans);
        //Right Sum
        int right = SumTree(root->right,ans);
        
        // if left+right != root->data 
        if(left + right != root->data){
            ans=0; // Not a SumTree
        }
        
        return root->data+left+right;
    }
    
    bool isSumTree(Node* root) {
        // Your code here
        
        int ans=1; // mark as SumTree already
        SumTree(root,ans);
        return ans;
    }
};