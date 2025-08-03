#include <bits/stdc++.h>
using namespace std;

queue<int> reverseFirstK(queue<int> q, int k){
    if (k > q.size() || k < 0) return q;
    if (q.empty()) return q;
    stack<int> st;

    while(k-- && !q.empty()){
        st.push(q.front());
        q.pop();
    }
    queue<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    while(!q.empty()){
        temp.push(q.front());
        q.pop();
    }
    return temp;
}

