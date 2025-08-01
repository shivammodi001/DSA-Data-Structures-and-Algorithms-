#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};
int main(){
    Node *head = new Node();
    head-> data = 10;
    head-> next = NULL;

    Node *temp = head;
    temp-> next = new Node();
    temp = temp-> next;
    temp-> data = 20;

    temp-> next = new Node();
    temp = temp-> next;
    temp-> data = 30;

    // printing linked list
    temp = head;
    while(temp){
        cout<< temp->data << " ";
        temp = temp-> next;
    }
}