#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

void RemoveLoop(Node *head){
    //base case
    if(head == nullptr || head->next == nullptr) return;

    // if there is only one node and it points to itself
    if(head->next == head) {
        head->next = nullptr; // Remove the loop
        return;
    }

    Node *slow = head->next;
    Node *fast = head->next->next;

    while(slow != fast && fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    // if the list has no loop
    if(!fast || !fast->next) return;

    // if there is only circular linked list
    fast = head; // Reset fast pointer to head
    if(slow == head) {
        while(slow->next != fast) {
            slow = slow->next;
        }
        slow->next = nullptr; // Remove the loop
        return;
    }

    // if there is a loop, find the start of the loop
    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = nullptr; // Remove the loop
    // Now the loop is removed, and the linked list is intact
    return;
}

int main(){

}