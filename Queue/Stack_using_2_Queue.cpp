#include <bits/stdc++.h>
using namespace std;

class QueueStack {
private:
    queue<int> q1;
    queue<int> q2;

public:
    void push(int);
    int pop();
};

// Push element onto stack
void QueueStack::push(int x) {
    q2.push(x);
    while (!q1.empty()) {
        q2.push(q1.front());
        q1.pop();
    }
    swap(q1, q2);
}

// Pop element from stack
int QueueStack::pop() {
    if (q1.empty()) return -1;
    int top = q1.front();
    q1.pop();
    return top;
}

// Example usage
int main() {
    QueueStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << endl; // 30
    cout << s.pop() << endl; // 20
    s.push(40);
    cout << s.pop() << endl; // 40
    cout << s.pop() << endl; // 10
    cout << s.pop() << endl; // -1 (empty)
}
