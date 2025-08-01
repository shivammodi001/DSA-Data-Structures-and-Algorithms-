#include <bits/stdc++.h>
using namespace std;

bool repeatedSubstringPattern(string s)
{
    if (s.size() == 1)
        return 0;
    // this method is not working for all test cases
    // vector<int>fre(26,0);
    // int n=s.size();
    // for(int i=0;i<n;i++){
    //     fre[s[i]-'a']++;
    // }
    // for(int i=1;i<26;i++){
    //     if(fre[i]==0) continue;
    //     // else if(fre)
    //     else if(fre[i-1]!=fre[i] && fre[i] <= 1) return 0;
    // }
    // return 1;

    // method 2
    string temp = s + s;
    string sub_temp = temp.substr(1, temp.size() - 2); // first and last char remove
    // now find original string in this sub_temp

    // if found return true
    if (sub_temp.find(s) != -1)
    {
        return 1;
    }
    // other-wise false
    return 0;
}


// Given a string s, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.

 

// Example 1:

// Input: s = "abab"
// Output: true
// Explanation: It is the substring "ab" twice.
// Example 2:

// Input: s = "aba"
// Output: false
// Example 3:

// Input: s = "abcabcabcabc"
// Output: true
// Explanation: It is the substring "abc" four times or the substring "abcabc" twice.
 