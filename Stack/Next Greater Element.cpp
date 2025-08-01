#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        int n = arr.size();
        stack<int> s; // stack to store indices
        vector<int> ans(n, -1); // initialize with -1
        
        for(int i = 0; i < n; i++) {
            // if stack is empty or current element is smaller than top of stack, push it
            while(!s.empty() && arr[s.top()] < arr[i]) {
                ans[s.top()] = arr[i];
                s.pop();
            }
            // push current index
            s.push(i);
        }
        
        return ans;
    }
};
