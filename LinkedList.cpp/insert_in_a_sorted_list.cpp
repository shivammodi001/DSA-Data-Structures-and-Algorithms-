#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node *sortedInsert(Node *head, int key) {
    // If the list is empty or the new key is smaller than the head's data
    if (!head || head->data > key) {
        Node *tmp = new Node(key);
        tmp->next = head;
        return tmp;
    }

    // Traverse the list to find the correct position to insert the new node
    Node *tmp = head;
    while (tmp->next && tmp->next->data < key) {
        tmp = tmp->next;
    }

    Node *node = new Node(key);
    node->next = tmp->next;
    tmp->next = node;

    return head;
}
