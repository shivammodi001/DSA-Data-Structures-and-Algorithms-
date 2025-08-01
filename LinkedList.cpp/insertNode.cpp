#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

// At any position in a linked list, we can insert a new node.
Node *insertNode(Node *head, int pos, int data)
{
    if (pos < 1)
    {
        cout << "Invalid position!" << endl;
        return head; // Invalid position
    }
    if (pos == 1)
    {
        Node *tmp = new Node();
        tmp->data = data;
        tmp->next = head;
        head = tmp;  // Update head to point to the new node
        return head; // Return the new head
    }

    Node *tmp = head;
    while (pos > 2 && tmp != NULL)
    {
        tmp = tmp->next; // Traverse to the node before the desired position
        pos--;
    }
    if (tmp == NULL)
    {
        return head; // Position is out of bounds
    }
    Node *newNode = new Node();
    newNode->data = data;

    newNode->next = tmp->next; // Link the new node to the next node
    tmp->next = newNode;       // Link the previous node to the new node
    return head;               // Return the head of the linked list
}

// After specific number
Node *insertAfter(Node *head,int after,int data){
    if(!head){
        return head;
    }
    Node *tmp = head;
    while(tmp != NULL && tmp->data != after)
{
        tmp = tmp->next;
    }
    if(tmp == NULL){
        cout << "Node with value " << after << " not found!" << endl;
        return head; // Node with the specified value not found
    }
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = tmp->next; // Link the new node to the next node
    tmp->next = newNode;       // Link the previous node to the new node    
    return head;               // Return the head of the linked list
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

int main()
{
    Node *head = NULL;
    head = insertNode(head, 1, 10);
    head = insertNode(head, 1, 20);
    head = insertNode(head, 2, 30);
    head = insertNode(head, 3, 25); // Insert at position 3

    PrintList(head);
    head = insertAfter(head, 20, 15); // Insert after node with value 20
    PrintList(head);
    head = insertAfter(head, 30, 35); // Insert after node with value 30
    PrintList(head);
    head = insertAfter(head, 100, 50); // Attempt to insert after a non-existent node
    PrintList(head);
}

// int main()
// {
//     Node *head = new Node();
//     head->data = 10;
//     head->next = NULL;

//     ////////////////////////////////////////////////////////////////////////////////////////////
//     // insertion at front of linked list
//     Node *newNode1 = new Node();
//     newNode1->data = 20;
//     newNode1->next = head; // Point new node to the old head
//     head = newNode1;       // Update head to point to the new node

//     /////////////////////////////////////////////////////////////////////////////////////////

//     // insertion at end of linked list
//     Node *newNode2 = new Node();
//     newNode2->data = 30;
//     newNode2->next = NULL; // New node will be the last node

//     Node *tmp = head;
//     while (tmp->next != NULL)
//     {
//         tmp = tmp->next; // Traverse to the last node
//     }
//     tmp->next = newNode2; // Link the last node to the new node

//     ///////////////////////////////////////////////////////////////////////////////////////////

//     // insertion at a specific position (e.g., position 2)
//     Node *newNode3 = new Node();
//     newNode3->data = 25;
//     newNode3->next = NULL; // New node will be inserted at position 2

//     int position = 2; // Position to insert the new node

//     if (position < 1)
//     {
//         cout << "Invalid position!" << endl;
//         return 0; // Invalid position
//     }
//     tmp = head;
//     for (int i = 1; i < position - 1 && tmp != NULL; i++)
//     {
//         tmp = tmp->next; // Traverse to the node before the desired position
//     }
//     if (tmp == NULL)
//     {
//         cout << "Position out of bounds!" << endl;
//         return 0; // Position is out of bounds
//     }
//     newNode3->next = tmp->next; // Link the new node to the next node
//     tmp->next = newNode3;       // Link the previous node to the new node

//     /////////////////////////////////////// ////////////////////////////////////

//     return 0;
// }