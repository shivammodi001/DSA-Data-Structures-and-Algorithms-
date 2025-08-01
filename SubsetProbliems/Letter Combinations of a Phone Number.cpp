// Example 1:

// Input: digits = "23"
// Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
// Example 2:

// Input: digits = ""
// Output: []
// Example 3:

// Input: digits = "2"
// Output: ["a","b","c"]

#include <bits/stdc++.h>
using namespace std;

void Func(string &digits, vector<string> &ans, vector<string> &mapping, string tmp, int index) {
    if(index == digits.size()) {
        ans.push_back(tmp);
        return;
    }

    int pos = digits[index] - '2'; // '2' maps to 0, '3' to 1, etc.

    for(int i = 0; i < mapping[pos].size(); i++) {
        Func(digits, ans, mapping, tmp + mapping[pos][i], index + 1);
    }
}

vector<string> letterCombinations(string digits) {
    vector<string> ans;
    if(digits.empty()) return ans;

    vector<string> mapping = {
        "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };

    Func(digits, ans, mapping, "", 0);
    return ans;
}

int main() {
    string input = "23";
    vector<string> result = letterCombinations(input);

    for(string s : result)
        cout << s << " ";
    return 0;
}
