#include <bits/stdc++.h>
using namespace std;

class QueueStack {
private:
    queue<int> q1;
    queue<int> q2;

public:
    void push(int x);
    int pop();
};

// Function to push an element into the stack
void QueueStack::push(int x) {
    // Step 1: Push x into q2
    q2.push(x);

    // Step 2: Move all elements from q1 to q2
    while (!q1.empty()) {
        q2.push(q1.front());
        q1.pop();
    }

    // Step 3: Swap q1 and q2
    swap(q1, q2);
}

// Function to pop an element from the stack
int QueueStack::pop() {
    // If stack is empty, return -1
    if (q1.empty()) return -1;

    // Remove the top element
    int top = q1.front();
    q1.pop();
    return top;
}

// Driver code to test the stack
int main() {
    QueueStack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.pop() << endl; // Output: 30
    cout << s.pop() << endl; // Output: 20

    s.push(40);

    cout << s.pop() << endl; // Output: 40
    cout << s.pop() << endl; // Output: 10
    cout << s.pop() << endl; // Output: -1 (stack is empty)

    return 0;
}
