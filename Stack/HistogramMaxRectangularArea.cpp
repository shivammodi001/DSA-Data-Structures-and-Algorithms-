#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getMaxArea(vector<int> &arr) {
        int n = arr.size();
        vector<int> NSR(n, n);  // Next Smaller to Right
        vector<int> NSL(n, -1); // Next Smaller to Left
        stack<int> st;

        // Find Next Smaller to Right (NSR)
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[i] < arr[st.top()]) {
                NSR[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        // Clear stack
        while (!st.empty()) st.pop();

        // Find Next Smaller to Left (NSL)
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[i] < arr[st.top()]) {
                NSL[st.top()] = i; // ✅ FIXED: Previously mistakenly used NSR
                st.pop();
            }
            st.push(i);
        }

        // Calculate max area
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int width = NSR[i] - NSL[i] - 1;
            ans = max(ans, arr[i] * width);
        }

        return ans;
    }
};
