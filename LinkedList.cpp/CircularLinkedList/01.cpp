#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};

// Singly Linked List to Circular Linked List
Node *convertToCircularLL(Node* head){
    if(head || head->next == NULL) return head; // if the list is empty or has only one node
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next; // traverse to the last node
    }
    temp->next = head; // make the last node point to the head
    return head;
}

// create a circular linked list
int main(){
    Node* head = new Node();
    vector<int> arr = {1, 2, 3, 4, 5};
    head->data = arr[0];
    Node* temp = head;
    for(int i = 1; i<arr.size();i++){
        temp->next = new Node();
        temp = temp->next;
        temp->data = arr[i];
        temp->next = NULL;
    }

    // Singly LL To Circular LL
    head = convertToCircularLL(head);
    
}