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

void insertAtHead(Node* &head, Node* &tail, int data)
{
    // ll is empty
    if(head==NULL)
    {
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }

    else{
        // ll is not empty
        Node* newNode=new Node(data);
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}


void insertAtTail(Node* &head,Node* &tail, int data)
{
    if(head==NULL)
    {
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
        // ll is non empty
        Node* newNode=new Node(data);
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
}

void insertAtPosition(Node* &head,Node* &tail, int data, int pos)
{
    int len=findLength(head);
    if(head==NULL)
    {
        Node* newNode=new Node(data);
        head=newNode;
        tail=new Node;

    }

    else if(pos==1)
    {
        insertAtHead(head,tail,data);
    }
    else if(pos==len+1)
    {
        insertAtTail(head,tail,data);
    }
    else{
        // insert in middle
        // step crate a node
        Node* newNode=new Node(data);
        // step 2 set prev an curr pointer
        Node* prevNode=NULL;
        Node* currNode=head;
        while(pos!=1)
        {
            pos--;
            prevNode=currNode;
            currNode=currNode->next;
        }
        // step 3 update pointer
        prevNode->next=newNode;
        newNode->prev=prevNode;
        newNode->next=currNode;
        currNode->prev=newNode;
    }

    
}

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
    insertAtPosition(head,tail,2000,5);
    print(head);
    cout<<endl;
    deleteNode(head,tail,1);
    print(head);
    cout<<endl;
    deleteNode(head,tail,3);
    print(head);
    cout<<endl;
    cout<<"length of ll"<<findLength(head)<<endl;
    
    return 0;
 
} 