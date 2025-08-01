// isme basically sabse bade prefix ko search karna hai 
// jo ki suffix bhi hoga 

#include<bits/stdc++.h>
using namespace std;
int lps(string s) {
    int n = s.length();
    vector<int> lps(n, 0);
    int len = 0; // Length of the previous longest prefix suffix
    int i = 1;   // Start from the second character

    while (i < n) {
        if (s[i] == s[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1]; // Use the previous longest prefix suffix
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps[n - 1]; // Return the length of the longest prefix suffix
}

int main() {
    string s;
    cin >> s;
    int result = lps(s);
    cout << result << endl; // Output the length of the longest prefix suffix
    return 0;
}

    // Dry run example:
    // Input: "ababcab"
    // Step-by-step lps array:
    // i=1 -> 'b' ≠ 'a' => lps[1]=0
    // i=2 -> 'a' == 'a' => lps[2]=1
    // i=3 -> 'b' == 'b' => lps[3]=2
    // i=4 -> 'c' ≠ 'a' => len=0 => lps[4]=0
    // i=5 -> 'a' == 'a' => lps[5]=1
    // i=6 -> 'b' == 'b' => lps[6]=2
    // Final lps = [0, 0, 1, 2, 0, 1, 2]
