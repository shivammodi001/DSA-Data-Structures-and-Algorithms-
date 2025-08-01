#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

// Function to check if a linked list is circular
bool isCircular(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    Node *tmp = head->next;
    while (tmp != NULL && tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    if (tmp == head) // If we reach back to the head, it's circular
    {
        return true;
    }
    return false;
}

bool isCircular2(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(fast == head || slow == head) // If either pointer reaches the head, it's circular
        {
            return true;
        }
    }
    return false; // Not circular
}


int main()
{
    Node *head = new Node();
    vector<int> arr = {1, 2, 3, 4, 5};
    head->data = arr[0];
    Node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        temp->next = new Node();
        temp = temp->next;
        temp->data = arr[i];
        temp->next = NULL;
    }

    // Convert to circular linked list
    temp->next = head; // Making it circular

    // Check if the linked list is circular
    if (isCircular(head))
    {
        cout << "The linked list is circular." << endl;
    }
    else
    {
        cout << "The linked list is not circular." << endl;
    }

    return 0;
}
