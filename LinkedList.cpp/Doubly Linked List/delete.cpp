#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int val) : data(val), next(nullptr), prev(nullptr) {}  
};

// Function to delete a node from the doubly linked list
// void deleteNode(Node*& head, Node* del) {
//     if (head == nullptr || del == nullptr) {
//         return; // Nothing to delete
//     }

//     // If the node to be deleted is the head node
//     if (head == del) {
//         head = del->next; // Move head to the next node
//     }

//     // Change next only if the node to be deleted is not the last node
//     if (del->next != nullptr) {
//         del->next->prev = del->prev;
//     }

//     // Change prev only if the node to be deleted is not the first node
//     if (del->prev != nullptr) {
//         del->prev->next = del->next;
//     }

//     delete del; // Free memory of the deleted node
// }

Node *deleteNodeByValue(Node *head, int value) {
    if(head == nullptr) {
        return nullptr;
    }
    Node *current = head;
    while(current != NULL){
        if(current->data == value){
            Node *temp = current;

            if(current->prev != NULL) {
                current->prev->next = current->next;
            } else {
                // Head is being deleted
                head = current->next;
            }

            if(current->next != NULL) {
                current->next->prev = current->prev;
            }

            current = current->next;
            delete temp;
        } else {
            current = current->next;
        }
    }
    return head;
}
