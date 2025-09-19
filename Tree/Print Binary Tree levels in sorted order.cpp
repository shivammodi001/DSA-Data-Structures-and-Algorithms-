// Given an array arr[] which contains data of N nodes of Complete Binary tree in level order fashion. The task is to print the level order traversal in sorted order.

// Example 1:

// Input:
// N = 7
// arr[] = {7 6 5 4 3 2 1}
// Output:
// 7
// 5 6
// 1 2 3 4
// Explanation: The formed Binary Tree is:
//              7
//           /      \
//         6         5
//       /  \      /   \
//      4    3    2     1


#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
vector<vector<int>> binTreeSortedLevels(int arr[], int n)
{
    vector<vector<int>> ans;

    int i = 0;     // current index in array
    int level = 0; // current level number

    while (i < n)
    {
        vector<int> tmp;           // har level ke liye naya vector
        int count = pow(2, level); // is level pe max itne nodes hote hain

        for (int j = 0; j < count && i < n; j++)
        {
            tmp.push_back(arr[i++]); // array ke elements dal do
        }

        sort(tmp.begin(), tmp.end()); // har level ko sort karo
        ans.push_back(tmp);

        level++; // next level
    }

    return ans;
}