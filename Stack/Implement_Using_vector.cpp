#include<bits/stdc++.h>
using namespace std;

// Stack implementation using dynamic array (vector)
// Stack follows LIFO (Last In First Out) principle
class Stack {
    private:
        vector<int> arr;
        int top;
    public:
        Stack() {
            top = -1;
        }
        void push(int x){
            arr.push_back(x);
            top++;
        }
        void pop(){
            if(top == -1) {
                cout << "Stack Underflow" << endl;
                return;
            }
            arr.pop_back();
            top--;
        }
        int peek(){
            if(top == -1) {
                cout << "Stack is empty" << endl;
                return -1; // Indicating stack is empty
            }
            return arr[top];
        }
        bool isEmpty() {
            return top == -1;
        }
        int size() {
            return top + 1;
        }
        void display() {
            if(isEmpty()) {
                cout << "Stack is empty" << endl;
                return;
            }
            for(int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    
    cout << "Stack elements: ";
    s.display();
    
    cout << "Top element: " << s.peek() << endl;
    
    s.pop();
    cout << "After popping, stack elements: ";
    s.display();
    
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;
    
    cout << "Stack size: " << s.size() << endl;

    return 0;
}