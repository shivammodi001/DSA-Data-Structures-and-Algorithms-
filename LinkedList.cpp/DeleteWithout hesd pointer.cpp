#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};

void deleteWithoutHeadNode(Node* del){
    if(del == NULL)
        return;
    if(del->next == NULL) {
        delete del; // If it's the last node, just delete it
        return;
        }
        Node* temp = del->next; // Store the next node
        del->data = temp->data; // Copy the data from the next node
        del->next = temp->next; // Link to the node after the next
        delete temp; // Delete the next node
}

int main() {
    Node* head = new Node();
    vector<int> arr = {1, 2, 3, 4, 5};
    head->data = arr[0];
    Node* temp = head;
    for(int i = 1; i < arr.size(); i++) {
        temp->next = new Node();
        temp = temp->next;
        temp->data = arr[i];
        temp->next = NULL;
    }

    // Deleting a node without head pointer
    deleteWithoutHeadNode(head->next->next); // Deletes the node with value 3

    // Print the list after deletion
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
    return 0;
}