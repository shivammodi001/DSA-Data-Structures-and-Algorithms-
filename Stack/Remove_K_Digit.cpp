#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    string removeKdigits(string s, int k) {
        // Stack to store digits in increasing order
        stack<int> st;
        int i = 0;

        while (i < s.size()) {
            int num = s[i] - '0';
            // Remove digits from the stack if current digit is smaller
            // and we still have k digits to remove
            while (st.size() && st.top() > num && k) {
                st.pop();
                k--;
            }
            st.push(num);
            i++;
        }

        // If k digits still left to remove, remove from the end
        while (k--) {
            st.pop();
        }

        string ans;
        char c;
        // Pop all digits from stack and append to ans string
        while (!st.empty()) {
            c = '0' + st.top();  // Convert int back to char
            st.pop();
            ans += c;
        }

        // Reverse the string to get correct order
        reverse(ans.begin(), ans.end());

        // Remove leading zeros
        i = 0;
        while (i < ans.size() && ans[i] == '0') {
            i++;
        }
        ans = ans.substr(i); // Get substring without leading zeros

        // If string is empty after removing zeros, return "0"
        if (ans.size() == 0) return "0";
        else return ans;
    }
};
