#include <bits/stdc++.h>
using namespace std;

string findSum(string &s1, string &s2)
{
    // Your code goes here
    int n = s1.length();
    int m = s2.length();
    int carry = 0;
    string ans = "";
    int i = n - 1, j = m - 1;
    while(i>=0 && j>=0){
        int sum = carry + (s1[i] - '0') + (s2[j] - '0'); // convert char to int
        ans += (sum%10 + '0'); // convert int to char
        carry = sum/10; // get the carry
        i--; // move to the left
        j--; // move to the left
    }
    // if there is still number left in s1
    while(i>=0){
        int sum = carry + (s1[i] - '0');
        ans += (sum%10 + '0');
        carry = sum/10;
        i--;
    }
    // if there still number left in s2
    while(j>=0 ){
        int sum = carry + (s2[j] - '0');
        ans += (sum%10 + '0');
        carry = sum/10;
        j--;
    }
    // if there is still carry, add it to the ans
    if(carry){
        ans += (carry + '0');
    }

    // edge case is leading zero remove krna hain
    int k = ans.size()-1;
    while(k>0 && ans[k] == '0'){
        ans.pop_back();
        k--;
    }

    // reverse the string beacuse we are adding from the end
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    // string s1 = "1234";
    // string s2 = "5678";
    string s1 = "0012";
    string s2 = "0008";
    cout << findSum(s1, s2) << endl;
}