#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

// delete first node
Node *deleteFirstNode(Node *head){
    if(head == NULL || head->next == NULL){
        delete head; // If the list is empty or has only one node, delete it
        return NULL; // Return NULL as the new head
    }
    Node *temp = head; // Store the current head
    head = head->next; // Move head to the next node
    delete temp; // Delete the old head
    return head; // Return the new head
}

// delete last node
Node *deleteLastNode(Node *head){
    if(head == NULL || head-> next == NULL){
        delete head; // If the list is empty or has only one node, delete it
        return NULL; // Return NULL as the new head
    }
    Node *temp = head;
    while(temp->next->next != NULL){
        temp = temp->next; // Traverse to the second last node
    }
    delete temp->next; // Delete the last node
    temp->next = NULL; // Set the next pointer of the second last node to NULL
    return head; // Return the head of the linked list
}

// deletion at a specific position
Node *deleteAtSpecificPo(Node* head,int pos){
    if(head == NULL || pos < 1){
        cout << "Invalid position!" << endl;
        return head; // Invalid position
    }

    if(pos == 1){
        Node *temp = head; // Store the current head
        head = head->next; // Move head to the next node
        delete temp; // Delete the old head
        return head; // Return the new head
    }

    Node *temp = head;
    while(pos > 2 && temp != NULL){
        temp = temp->next; // Traverse to the node before the desired position
        pos--;
    }

    if(temp == NULL || temp->next == NULL){
        cout << "Position out of bounds!" << endl;
        return head; // Position is out of bounds
    }
    
    Node *nodeToDelete = temp->next; // Node to be deleted
    temp->next = nodeToDelete->next; // Link the previous node to the next node
    delete nodeToDelete; // Delete the node at the specified position
    return head; // Return the head of the linked list
}

// printing the linked list
void PrintList(Node *head)
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }
    Node *tmp = head;
    while (tmp)
    {
        cout << tmp->data << " ";
        tmp = tmp->next; // Move to the next node
    }
    cout << endl; // Print a new line after printing the list
}

int main(){
    vector<int> arr = {10, 20, 30, 40, 50};
    int n = arr.size();

    Node *head = new Node();
    head->data = arr[0];
    head->next = NULL;

    Node *temp = head;
    for(int i=1;i<n;i++){
        temp->next = new Node();
        temp = temp->next;
        temp->data = arr[i];
        temp->next = NULL; // Ensure the next pointer of the last node is NULL
    }
    // delete first node
    head = deleteFirstNode(head);
    // Printing the linked list after deletion
    cout << "Linked List after deleting the first node: ";
    PrintList(head);

    // delete last node
    head = deleteLastNode(head);
    // Printing the linked list after deletion
    cout << "Linked List after deleting the last node: ";
    PrintList(head);

    // deletion at a specific position
    int position = 2; // Position to delete the node

}