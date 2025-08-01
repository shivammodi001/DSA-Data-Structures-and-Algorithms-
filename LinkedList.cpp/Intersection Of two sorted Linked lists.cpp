 
 #include<bits/stdc++.h>
 using namespace std;

 class Node {
     public:
     int data;
     Node* next;
 };

 Node* findIntersection(Node* head1, Node* head2) {
     if(head1 == NULL || head2 == NULL){
        return NULL;
     }
     Node *dummy = new Node();
     dummy->data = 0;
     Node *tmp = dummy;
     while(head1 &&head2){
        if(head1->data == head2->data){
            tmp->next = new Node();
            tmp->data = head1->data;
            tmp = tmp->next;
            head1 = head1->next;
            head2 = head2->next;
        }else if(head1->data < head2->data){
            head1 = head1->next;
        }else{
            head2 = head2->next;
            }
        
     }
        tmp->next = NULL; 
        tmp = dummy;
        dummy = dummy->next; 
        delete tmp;
        return dummy;
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
        head2->data = 2;
        head2->next = new Node();
        head2->next->data = 3;
        head2->next->next = new Node();
        head2->next->next->data = 4;
        head2->next->next->next = NULL;
    
        Node* intersectionHead = findIntersection(head1, head2);
    
        // Print the intersection list
        Node* temp = intersectionHead;
        while(temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        
        return 0;
    }