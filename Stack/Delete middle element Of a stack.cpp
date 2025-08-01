#include <bits/stdc++.h>
using namespace std;

void deleteMid(stack<int>& s){
    if(s.empty()) return;

    int mid = s.size() / 2;
    stack<int> temp;

    // Move elements until the middle
    while(mid--){
        temp.push(s.top());
        s.pop();
    }

    // Remove the middle element
    s.pop();

    // Restore the elements
    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    deleteMid(s);

    // Print updated stack
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
