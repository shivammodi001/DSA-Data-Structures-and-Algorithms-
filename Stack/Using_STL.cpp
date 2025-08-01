#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top element: " << s.top() << endl;
    s.pop();
    cout << "After popping, top element: " << s.top() << endl;
    
    // Displaying all elements in the stack
    cout << "Stack elements: ";
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    // size of the stack
    cout << "\nSize of the stack: " << s.size() << endl;
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;
    return 0;

}