#include <bits/stdc++.h>
using namespace std;

string merge(string S1, string S2) {
    // your code here
    int n1 = S1.length();
    int n2 = S2.length();
    string ans;
    int st1 = 0, st2 = 0;
    while(st1<n1 && st2 < n2){
        ans += S1[st1];
        st1++;
        ans += S2[st2];
        st2++;
    }
    while(st1<n1){
        ans += S1[st1];
        st1++;
    }
    while(st2<n2){
        ans += S2[st2];
        st2++;
    }
    return ans;
    
}
int main()
{
    string s1;
    cin >> s1;
    string s2;
    cin>> s2;

    string result = merge(s1, s2);
    cout << result;

    return 0;
}