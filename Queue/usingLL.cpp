#include <bits/stdc++.h>
using namespace std;

class QueueNode {
public:
    int data;
    QueueNode* next;

    QueueNode(int a) {
        data = a;
        next = NULL;
    }
};

class MyQueue {
public:
    QueueNode* front;
    QueueNode* rear;

    MyQueue() {
        front = rear = NULL;
    }

    void push(int);
    int pop();
};

// Function to push an element into the queue.
void MyQueue::push(int x) {
    QueueNode* newNode = new QueueNode(x);
    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

// Function to pop front element from the queue.
int MyQueue::pop() {
    if (front == NULL) {
        return -1;
    }

    int poppedData = front->data;
    QueueNode* temp = front;
    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }

    delete temp;
    return poppedData;
}

// Driver code to test
int main() {
    MyQueue q;
    q.push(10);
    q.push(20);
    cout << q.pop() << endl;  // 10
    cout << q.pop() << endl;  // 20
    cout << q.pop() << endl;  // -1 (queue is empty)
    return 0;
}
