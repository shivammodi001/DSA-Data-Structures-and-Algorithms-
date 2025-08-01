// Input: arr[] = ["ab", "aa", "aa", "bcd", "ab"]
// Output: 3
// Explanation: After the first iteration, we'll have: ab bcd ab. We can't further destroy more strings and hence we stop and the result is 3. 
// Input: arr[] = ["tom", "jerry", "jerry", "tom"]
// Output: 0
// Explanation: After the first iteration, we'll have: tom tom. After the second iteration: 'empty-array' .Hence, the result is 0.


#include<bits/stdc++.h>
using namespace std;

int removeConsecutiveSame(vector<string>& arr){
    stack<string> st;
    for(int i = 0;i<arr.size();i++){
        if(st.empty() || arr[i] != st.top()){  
            st.push(arr[i]);
        }else{
            st.pop();
            }
    }
    return st.size();
}

int main(){
    vector<string> arr = {"ab", "aa", "aa", "bcd", "ab" };
    cout << removeConsecutiveSame(arr) << endl;
}