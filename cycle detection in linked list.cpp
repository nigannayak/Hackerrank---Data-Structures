/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) 
{
    int counter_val = 0;
    Node *temp;
    temp = head;
    
    while(temp != NULL && counter_val < 100)
    {
        temp = temp ->next;
        counter_val++;
    }
    
    if(temp == NULL)
        return false;
    
    return true;
}