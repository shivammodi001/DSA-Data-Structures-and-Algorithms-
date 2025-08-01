// Examples:

// Input: s = "ABC"
// Output: ["ABC", "ACB", "BAC", "BCA", "CAB", "CBA"]
// Explanation: Given string ABC has 6 unique permutations.
// Input: s = "ABSG"
// Output: ["ABGS", "ABSG", "AGBS", "AGSB", "ASBG", "ASGB", "BAGS", "BASG", "BGAS", "BGSA", "BSAG", "BSGA", "GABS", "GASB", "GBAS", "GBSA", "GSAB", "GSBA", "SABG", "SAGB", "SBAG", "SBGA", "SGAB", "SGBA"]
// Explanation: Given string ABSG has 24 unique permutations.

#include <bits/stdc++.h>
using namespace std;

void find(string &s, int index, set<string> &ans)
{
    if (index == s.size())
    {
        ans.insert(s);
        return;
    }
    for (int i = index; i < s.size(); i++)
    {
        swap(s[index], s[i]);
        find(s, index + 1, ans);
        swap(s[index], s[i]); // backtrack to get the original string
    }
}

vector<string> findPermutation(string &s)
{
    set<string> st; // set is for unique permutations 
    find(s, 0, st);
    vector<string> ans(st.begin(), st.end());

    return ans;
}
int main()
{
    string s = "ABC";
    findPermutation(s);
    return 0;
}