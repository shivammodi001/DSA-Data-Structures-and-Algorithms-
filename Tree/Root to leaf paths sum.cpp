// Input:

//             10
//           /   \
//          20    30
//         / \    
//        40  60

// Output: 2630
// Explanation: There are 3 leaves, resulting in leaf path of 1240, 1260, 130 sums to 2630.

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// helper function to calculate numbers from root to leaf
void calNum(Node *root, vector<int> &nums, int num)
{
    if (root == NULL)
        return;

    // add current node's data
    num = num * 10 + root->data;

    // if leaf node, push number
    if (root->left == NULL && root->right == NULL)
    {
        nums.push_back(num);
        return;
    }

    calNum(root->left, nums, num);
    calNum(root->right, nums, num);
}

int treePathsSum(Node *root)
{
    vector<int> nums;
    calNum(root, nums, 0); // start with 0, not root->data
    int sum = 0;
    for (auto it : nums)
    {
        sum += it;
    }
    return sum;
}