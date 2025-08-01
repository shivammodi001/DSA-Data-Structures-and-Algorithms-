#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string &s)
{
    int n = s.size();
    int st = 0;
    int end = n - 1;
    if (s[st] != s[end])
    {
        return false;
    }
    while (st <= end)
    {
        if (s[st] != s[end])
        {
            return false;
        }
        st++;
        end--;
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    bool ans = isPalindrome(s);
    if(ans){
        cout << "YES";
    }else{
        cout<< "NO";
    }
    return 0;
}