#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void rearrangeLinkedList(Node*& head) {
    if (!head || !head->next) return;

    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = even;

    while (even && even->next) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead; // Link the end of odd indexed nodes to the head of even indexed nodes
}


void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original list: ";
    printList(head);

    rearrangeLinkedList(head);

    cout << "Rearranged list: ";
    printList(head);

    return 0;
}