#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        
        Node(int val) {
            data = val;
            next = nullptr;
        }
};

// Stack implementation using linked list
class Stack {
    private :
        Node *top;
    public:
        Stack() {
            top = nullptr;
        }
        void push(int x){
            Node *newNode = new Node(x);
            newNode->next = top;
            top = newNode;
        }
        void pop(){
            if(top == NULL){
                cout << "Stack Underflow" << endl;
                return;
            }
            
            cout << "Popped element: " << top->data << endl;
            Node *temp = top;
            top = top->next;
            delete temp;
        }
        int peek(){
            if(top == nullptr) {
                cout << "Stack is empty" << endl;
                return -1; // Indicating stack is empty
            }
            return top->data;
        }
        bool isEmpty() {
            return top == nullptr;
        }
        int size() {
            int count = 0;
            Node *current = top;
            while(current != nullptr) {
                count++;
                current = current->next;
            }
            return count;
        }
        void display() {
            if(isEmpty()) {
                cout << "Stack is empty" << endl;
                return;
            }
            Node *current = top;
            while(current != nullptr) {
                cout << current->data << " ";
                current = current->next;
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
    
    return 0;
}