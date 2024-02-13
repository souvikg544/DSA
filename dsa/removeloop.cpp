#include<iostream>
using namespace std;


// step 1 check loop present or not
bool checkLoop(Node* &head)
{
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

        // check for loop
        if(fast==slow)
        {
            return true;
        }
    }
    return false;
}


// step 2 get starting point of loop
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


// step 3 ..jis bhi ode  next starting k equal use nullk rdenge

void removeLoop(Node* &head)
{
    //Node* startPoint=getStartingPointOfLoop(head);
   // Node* getStartingPointOfLoop(Node* &head)
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

    //  starting point..
    Node* startPoint=return slow;

    Node* temp=fast;
    while(temp->next!=startPoint)
    {
        temp=temp->next;
    }

    temp->next=NULL;
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
    removeLoop(head);
    print(head);
    cout<<endl;
}