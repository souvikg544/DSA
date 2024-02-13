#include<iostream>
using namespace std;
class Node{
    int data;
    Node* next;
};

Node* reverseUsingRecursion(Node* prev,Node*curr)
{
    if(curr==NULL)
    {
        return prev;
    }
    //  case hum solve krenge
    Node* nextNode=curr->next;
    curr->next=prev;
    prev=curr;
    curr=nextNode;

    // bki rec solve krega
    return reverseUsingRecursion(prev,curr);
}
// 1 find middle node
Node* middleNode(Node* head)
{
    Node* slow=head;
    Node* fast=head;

    while(fast->next!=NULL)
    {
        fast=fast->next;
        if(fast->next!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}

bool compareList(Node* head1, Node* head2)
{
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data!=head2->data)
        {
            return false;
        }
        else{
            head=head->next;
            head2=head2->next;
        }
    }
    return true; 
}

bool isPalindrome(Node* head)
{
    // brea into 2 halves
    Node* midNode=middleNode(head);
    Node* head2=midNode->next;
    midNode->next=NULL;
    // reverse second half
    Node* prev=NULL;
    Node* curr=head2;
    head2=reverseusingRecursion(prev,curr);

    // compare both ll
    bool ans=compareList(head,head2);
    return ans;


}