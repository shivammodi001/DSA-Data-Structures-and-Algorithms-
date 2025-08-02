#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findRecArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> NSR(n, n);  // Next Smaller to Right
        vector<int> NSL(n, -1); // Next Smaller to Left
        stack<int> st;

        // NSR
        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[i] < heights[st.top()]) {
                NSR[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        while (!st.empty()) st.pop(); // clear stack

        // NSL
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && heights[i] < heights[st.top()]) {
                NSL[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        int area = 0;
        for (int i = 0; i < n; i++) {
            area = max(area, heights[i] * (NSR[i] - NSL[i] - 1));
        }
        return area;
    }

    int maxArea(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return 0;
        int ans = 0;
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> heights(col, 0);

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (matrix[i][j] == 0) {
                    heights[j] = 0;
                } else {
                    heights[j]++;
                }
            }
            ans = max(ans, findRecArea(heights));
        }

        return ans;
    }
};
