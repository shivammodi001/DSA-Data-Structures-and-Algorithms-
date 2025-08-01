// Get minimum element from stack

#include<bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<int> s;
    stack<int> minStack;

    void push(int val) {
        s.push(val);
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }

    void pop() {
        if (s.empty()) return;
        if (s.top() == minStack.top()) {
            minStack.pop();
        }
        s.pop();
    }

    int top() {
        if (s.empty()) return -1;
        return s.top();
    }

    int getMin() {
        if (minStack.empty()) return -1;
        return minStack.top();
    }
};

// MinStack* obj = new MinStack();
// obj->push(5);         // s = [5],        minStack = [5]
// obj->push(3);         // s = [5, 3],     minStack = [5, 3]
// obj->push(3);         // s = [5, 3, 3],  minStack = [5, 3, 3]
// obj->push(7);         // s = [5, 3, 3, 7], minStack = [5, 3, 3]

// cout << obj->getMin(); // 🔥 Output: 3

// obj->pop();           // remove 7
// cout << obj->getMin(); // 🔥 Output: 3

// obj->pop();           // remove 3
// cout << obj->getMin(); // 🔥 Output: 3

// obj->pop();           // remove 3 again
// cout << obj->getMin(); // 🔥 Output: 5

