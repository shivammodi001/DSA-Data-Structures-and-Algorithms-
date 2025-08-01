#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

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
    temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}