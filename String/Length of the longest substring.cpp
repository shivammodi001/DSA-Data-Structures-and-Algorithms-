#include <bits/stdc++.h>
using namespace std;

int longestUniqueSubstring(string &s)
{
    vector<bool> count(26, 0);
    int start = 0, maxLen = 0, end = 0;

    while (end < s.size())
    {
          // If the character at 'end' is already seen, move 'start' to remove duplicates
        while (count[s[end] - 'a'])
        {
            count[s[start] - 'a'] = 0; // Remove character at 'start' from the window
            start++;// Move start forward
        }
        count[s[end] - 'a'] = 1;// Mark the current character as seen
        maxLen = max(maxLen, end - start + 1);   // Update the maximum length found so far
        end++; // Move the end pointer forward
    }

    return maxLen;
}

int main()
{
    string s = "abcabcbb";
    cout << "Length of the longest substring without repeating characters is " << longestUniqueSubstring(s); 
    return 0;
}