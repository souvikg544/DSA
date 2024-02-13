#include<iostream>
using namespace std;

Node* reverseKGroup(Node* head, int k)
{
    if(haed==NULL)
    return;
    if(head->next==NULL)
    return head;


    // 1case
    Node* prev=NULL;
    Node* curr=head;
    int pos=1;
    Node* nextNode=curr->next;

    while(pos<k)
    {
        pos++;
        nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }

    if(nextNode!=NULL)
    {
        Node* RecursionAns=reverseKGroup(nextNode,k);
        nextNode->next=prev;
    }
    return RecursionAns;

}