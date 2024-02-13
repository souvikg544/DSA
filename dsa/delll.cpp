#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node()
    {
        this->prev=NULL;
        this->next=NULL;
    }

    Node(int data)
    {
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ->";
        temp=temp->next;
    }
}


int findLength(Node* &head)
{
    Node* temp=head;
    int len=0;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}
// deletion in doubly ll

void deleteNode(Node* &head, Node* &tail, int position)
{
    int len=findLength(head);

    if(head==NULL)
    {
        // LL EMPTY
        cout<<"cannot delte , ll is emptyy"<<endl;
        return;
    }

    if(head==tail)
    {
        Node* temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
        return;
    }

    if(position==1)
    {
        // delte from head
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
    }

    else if(position==len)
    {
        // delete from tail
        Node* prevNode=tail->prev;
        prevNode->next=NULL;
        tail->prev=NULL;
        delete tail;
        tail=prevNode;
    
    }

    else{
        // delete fom middle
        // step 1: set 3 pointers 
        // prevnode/currnode/nextnode
        Node* prevNode=NULL;
        Node* currNode=head;
        while(position!=1)
        {
            position--;
            prevNode=currNode;
            currNode=currNode->next;
        }
        Node* nextNode=currNode->next;

        // isolate currnode
        prevNode->next=nextNode;
        currNode->prev=NULL;
        currNode->next=NULL;
        nextNode->prev=prevNode;

        // step 3
        delete currNode;
    }
}