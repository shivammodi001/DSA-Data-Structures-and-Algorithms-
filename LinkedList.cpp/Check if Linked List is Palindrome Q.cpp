#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};

bool isPalindrome(Node* head) {
        Node *temp=head;
        // 1 list h
        if(head->next==NULL){
            return 1;
        }
        int c=0;
        while(temp){
            c++;
            temp=temp->next;
        }
        c/=2;
        Node *pre=NULL;
        
        Node *curr=head;
        while(c--){
            pre=curr;
            curr=curr->next;
        }
        pre->next=NULL;
        // reverse 2nd half array
        pre=NULL;
        Node *front=NULL;
        while(curr){
            front=curr->next;
            curr->next=pre;
            pre=curr;
            curr=front;
        }
        Node *head1=head;
        Node *head2=pre;      
        while(head1){
            if(head1->data!=head2->data){
                return 0;
            }else{
                head1=head1->next;
                head2=head2->next;
            }
        }  
        return 1;

    }