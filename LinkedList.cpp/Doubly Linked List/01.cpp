#include<bits/stdc++.h>
using namespace std;

class Node { 
    public:
    int data;
    Node* next;
    Node *prev;
    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

// vector element push in doubly linked list
int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    Node* head = new Node(v[0]);
    Node* current = head;
    for(int i = 1; i < v.size(); i++) {
        Node* newNode = new Node(v[i]); // Create a new node with the value from the vector
        current->next = newNode; // Link the current node to the new node
        newNode->prev = current; // Set the previous pointer of the new node to the current node
        current = newNode; // Move to the new node
    }

    // Print the list
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}

int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    head->next = second;
    second->next = third;

    second->prev = head;
    third->prev = second;

    // Print the list
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}