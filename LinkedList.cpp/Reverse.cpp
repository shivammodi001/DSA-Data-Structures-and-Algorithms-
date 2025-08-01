#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node* reverseLinkedList(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *prev = NULL;
    Node *curr = head;
    Node *fur = NULL;
    while(curr !=NULL){
        fur = curr->next;
        curr->next = prev; // Reverse the link
        prev = curr;
        curr = fur; // Move to the next node
    }
    return prev; // New head of the reversed linked list
}

//reverse using recursion
void reverseLinkedListRecursive(Node* head){
    if(head == NULL){
        return;
    }
    // jab tak head null na ho jaye aage badhte raho
    reverseLinkedListRecursive(head->next);
    // jab head null ho jaye tab last node ko print karo
    cout << head->data << " "; 
   
}

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
    // Printing the linked list

    // before reversing
    cout << "Linked List before reversing: ";
    temp = head;
    PrintList(temp);

    cout << endl;
    // reversing the linked list
    cout<< "Linked List after reversing: ";
    head = reverseLinkedList(head);
    PrintList(head);
    return 0;
}