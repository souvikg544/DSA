#include<iostream>
using namespace std;

Node* Solve(Node* head)
{
    // bc
    if(head==NULL)
    return head;
    if(head->next==NULL)
    return head;

    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->next!=NULL && temp->data==temp->next->data)
        {
            // match
            // remove
            Node* nextNode=temp->next;
            temp->next=nextNode->next;
            nextNode->next=NULL;
            delete nextNode;
        }
        else{
            // not match
            temp=temp->next;
        }
        
}
return head;
    }