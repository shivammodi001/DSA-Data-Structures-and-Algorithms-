#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Solution {
  public:
  
    int Height(Node* root,int &ans){
        if(!root) return 0;
        
        int leftHeight = Height(root->left,ans);
        int rightHeight = Height(root->right,ans);
        
        // agar height diff > 1 hain toh ans = 0
        if(abs(leftHeight-rightHeight)>1){
            ans=0;
        }
        // height uper return karo
        return 1+max(leftHeight,rightHeight);
    }
    bool isBalanced(Node* root) {
        // Code here
        int ans=1; // let assume tree is balance
        Height(root,ans);
        if(ans){
            return 1;
        }
        return 0;
    }
};