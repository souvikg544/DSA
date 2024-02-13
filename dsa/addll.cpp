#include<iostream>
using namespace std;


Node* reverse(Node* &head)
{
    Node* prev=NULL;
    Node* curr=head;

    while(curr!=NULL)
    {
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    return prev;
}



void addOne(Node* &head)
{
    // reverse
    head=reverse(head);

    // add 1
    int carry=1;
    Node* temp=head;
    while(temp->next!=NULL)
    {
        int totalSum=temp->data+carry;
        int digit=totalSum10;
        carry=totalSum/10;

        temp->data=digit;
        temp=temp->next;

        if(carry==0)
        {
            break;
        }
    }

    // process last node
    if(carry!=0)
    {
     int totalSum=temp->data+carry;
        int digit=totalSum10;
        carry=totalSum/10;

        temp->data=digit;
        if(carry!=0)
        {
            Node* newNode=new Node(carry);
            temp->next=newNode;
        }   
    }



    // reverse
      head=reverse(head);
}

int main()
{
    //Node* head=new Node(10);
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,10);
    print(head);
    cout<<endl;
    insertAtTail(head,tail,1000);
    print(head);
    cout<<endl;
    addOne(head);
    print(head);
    cout<<endl;
}