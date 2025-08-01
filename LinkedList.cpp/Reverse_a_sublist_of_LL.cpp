#include <bits/stdc++.h>
using namespace std;
// toh basicallly in question we are given a linked list and we have to reverse a sublist of it
// Like m = 2 and n = 4, then we have to reverse the linked list from 2nd node to 4th node

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

// User function Template for C++

/*
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution
{
public:
    // Reverse the first 'n' nodes from the given head
    Node *Reverse(Node *head, int n)
    {
        Node *prev = nullptr;
        Node *curr = head;
        Node *next = nullptr;

        while (n-- && curr)
        {
            next = curr->next; // Save next node
            curr->next = prev; // Reverse link
            prev = curr;       // Move prev forward
            curr = next;       // Move curr forward
        }

        return prev; // New head of the reversed sublist
    }

    Node *reverseBetween(Node *head, int m, int n)
    {
        if (m == n)
            return head; // No need to reverse if both positions are same

        int count1 = m;
        int count2 = n;

        Node *first = NULL;  // Node just before the reversal starts
        Node *second = head; // Iterator to move to nth node

        // Traverse to the nth node and identify the node before m (i.e., 'first')
        while (count2--)
        {
            count1--;
            if (count1 == 1)
            {
                first = second; // first will point to (m-1)th node
            }
            second = second->next;
        }

        // Case 1: Reversal starts from head (i.e., m == 1)
        if (!first)
        {
            if (!second)
            {
                // If n is at the end, reverse entire list till end
                return Reverse(head, n);
            }
            else
            {
                Node *tmp = head;
                Node *newHead = Reverse(head, n);
                tmp->next = second; // Connect last of reversed to remaining
                return newHead;
            }
        }

        // Case 2: Reversal is somewhere in the middle
        Node *tmp = first->next;               // mth node
        first->next = Reverse(tmp, n - m + 1); // Reverse sublist
        tmp->next = second;                    // Connect last of reversed to rest of list

        return head; // Return the updated head
    }
};

int main()
{
}