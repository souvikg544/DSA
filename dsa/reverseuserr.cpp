#include<iostream>
using namespace std;
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseUsingRecursion(struct Node* prev, struct Node* curr)
    {
        // 1 base case
        if(curr==NULL)
        {
            return prev;
        }
        
        // 1 case hum solve krenge
        struct Node* nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
        
        // bai recursion handle krega
        struct Node* recursionkaAns=reverseUsingRecursion(prev,curr);
        return recursionkaAns;
    }
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        struct Node* prev=NULL;
        struct Node* curr=head;
        return reverseUsingRecursion(prev,curr);
    }
    
};





// iterative way..
class Solution{
    public:
    Node* reverseList(Node* head)
    {
        Node* prev=NULL;
        Node* curr=head;
        while(curr!=NULL)
        {
            Node* nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        return prev;
    }
}