// Clone a linked list With next and random pointer
// mujhe same DLL ka clone banana hai jisme next aur random dono pointer honge
// mujhe isme next aur random dono pointer ka clone banana hai
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *random;

    Node(int val) : data(val), next(nullptr), random(nullptr) {}
};



Node *cloneLinkedList(Node *head)
{
    if (!head)
        return nullptr;

    // Step 1: Create a copy of each node and insert it next to the original node
    Node *clone = head;
    while (clone)
    {
        Node *tmp = new Node(clone->data); // Create a new node with the same data
        tmp->next = clone->next;           // Insert cloned node after original node
        clone->next = tmp;                 // Link original to clone
        clone = tmp->next;                 // Move to next original node
    }

    // Step 2: Set the random pointers for the cloned nodes
    clone = head;
    while (clone)
    {
        if (clone->random)
        {
            clone->next->random = clone->random->next; // Set cloned random
        }
        clone = clone->next->next;
    }

    // Step 3: Separate the cloned list from the original list
    Node *first = head;
    Node *second = head->next;
    Node *clonedHead = second;

    while (first && second)
    {
        first->next = second->next;
        first = first->next;
        if (first){
            second->next = first->next;
        }
        second = second->next;
    }

    return clonedHead; // Return the head of the cloned list
}


int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->random = head->next;
    head->next->random = head;

    Node *clonedList = cloneLinkedList(head);

    return 0;
}