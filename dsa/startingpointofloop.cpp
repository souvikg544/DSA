#include<iostream>
using namespace std;

Node* getStartingPointOfLoop(Node* &head)
{
    // check for loop
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==slow)
        {
            break;
        }
    }

    // .....
    if(fast==NULL)
    {
        // no cycle present
        return NULL;
    }

    // yha pucha iska matlab slow and fast met kr chuke h
    slow=head;

    // slow and fast->1 step
    while(fast!=slow)
    {
        slow=slow->next;
        fast=fast->next;
    }

    // return starting point..
    return slow;
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,60);
    insertAtHead(head,tail,77);
    insertAtTail(head,tail,90);
    tail->next=head->next;

    cout<<getStartingPointOfLoop(head)->data<<endl;
    cout<<endl;
}