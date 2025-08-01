#include <bits/stdc++.h>
using namespace std;

// Given a string s, the task is to find the minimum characters to be added at the front to make the string palindrome.

// Note: A palindrome string is a sequence of characters that reads the same forward and backward.

// Examples:

// Input: s = "abc"
// Output: 2
// Explanation: Add 'b' and 'c' at front of above string to make it palindrome : "cbabc"
// Input: s = "aacecaaaa"
// Output: 2
// Explanation: Add 2 a's at front of above string to make it palindrome : "aaaacecaaaa"

// Approach -> string me sabse bada palimdrome suffix nikal lo, uske baad jo bhi characters bache hain unhe front me add kar do.
// string tmp = s + "$" + reverse(s);
// Now find LPS of tmp string
// return s.size() - lps[tmp.size() - 1];

string shortestPalindrome(string s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    string tmp = s + "$" + rev;
    int n = tmp.size();
    vector<int> lps(n, 0);
    int len = 0;
    int i = 1;

    while (i < n)
    {
        if (tmp[i] == tmp[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }

    // Longest palindromic prefix
    int palinLen = lps[n - 1];
    string suffix = s.substr(palinLen);    // non-palindromic suffix
    reverse(suffix.begin(), suffix.end()); // this needs to be added at front

    return suffix + s;
}

int minChar(string &s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    string tmp = s + "$" + rev;
    int n = tmp.size();
    vector<int> lps(n, 0);
    int len = 0;
    int i = 1;
    while (i < n)
    {
        if (tmp[i] == tmp[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    // lps[n-1] will give the length of longest palindromic suffix
    return s.size() - lps[n - 1]; // this for counting the minimum characters to be added at the front
}

int main()
{
    string s;
    cin >> s;
    cout << minChar(s) << endl;
    return 0;
}
