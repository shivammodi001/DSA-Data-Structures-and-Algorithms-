#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};

int intersectPoint(Node* h1, Node* h2) {
    if (h1 == NULL || h2 == NULL) return -1;
    Node *a = h1, *b = h2;
    while (a != b) {
        if (a == NULL) {
            a = h2;
        }
        else {
            a = a->next;
        }
        if (b == NULL) {
            b = h1;
        }
        else {
            b = b->next;
        }
    }
    return a->data;
}

// 2nd approach
int intersectPoint(Node* h1, Node* h2) {
    if (h1 == NULL || h2 == NULL) return -1;
    Node *a = h1, *b = h2;
    int len1 = 0, len2 = 0;
    while (a != NULL) {
        len1++;
        a = a->next;
    }
    while (b != NULL) {
        len2++;
        b = b->next;
    }
    a = h1;
    b = h2;
    if(len1 > len2){
        for(int i = 0; i < len1 - len2; i++) {
            a = a->next; // Move a ahead by the difference in lengths
        }
    } else {
        for(int i = 0; i < len2 - len1; i++) {
            b = b->next; // Move b ahead by the difference in lengths
        }
    }
    while (a != b) {
        a = a->next;
        b = b->next;
    }
    return a->data; // Return the data of the intersection point
}

int main() {
    Node* head1 = new Node();
    head1->data = 1;
    head1->next = new Node();
    head1->next->data = 2;
    head1->next->next = new Node();
    head1->next->next->data = 3;
    head1->next->next->next = NULL;

    Node* head2 = new Node();
    head2->data = 4;
    head2->next = new Node();
    head2->next->data = 5;
    head2->next->next = head1->next; // Intersection at node with data 2
    head2->next->next->next = NULL;

    int intersectionData = intersectPoint(head1, head2);
    
    if (intersectionData != -1) {
        cout << "Intersection Point Data: " << intersectionData << endl;
    } else {
        cout << "No Intersection Point" << endl;
    }

    return 0;
}