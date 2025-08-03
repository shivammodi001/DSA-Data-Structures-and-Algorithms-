#include<bits/stdc++.h>
using namespace std;

int celebrity(vector<vector<int>> &mat)
    {
        int n = mat.size();
        stack<int> st;
        for (int i = 0; i < n; i++){
            st.push(i);
        }
        while (st.size() > 1){
            int first = st.top(); // first candidate
            st.pop();
            int second = st.top(); // second candidate
            st.pop();

            if (mat[first][second] == 1) {
                // first knows second, so first cannot be a celebrity
                st.push(second);
            } else {
                // second knows first, so second cannot be a celebrity
                st.push(first);
            }
        }

        if (st.empty()) return -1; // No celebrity found

        int candidate = st.top();
        st.pop();
        int row_count = 0;
        int col_count = 0;

        for(int i = 0; i < n; i++)
        {
            if (i != candidate) {
                row_count += mat[candidate][i]; // Count how many people candidate knows
                col_count += mat[i][candidate]; // Count how many people know the candidate
            }
        }    

        if (row_count == 0 && col_count == n - 1) return candidate;
        return -1; // No celebrity found
    }