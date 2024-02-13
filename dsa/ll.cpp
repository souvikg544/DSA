#include<iostream>
using namespace std;

// 1 step create a class
class Node{
    public:
    int data;
    Node* next;
    
// constructor
    Node()
    {
        cout<<"i am deafult constructor"<<endl;
        this->next=NULL;
    }

    Node(int data)
    {
        cout<<"i am parameterized constructor"<<endl;
        this->data=data;
        this->next=NULL;
    }

    ~Node()
    {
        cout<<"destructor called for: "<<this->data<<endl; 
    }
};


void printLL(Node* head)
{
    // create a temp pointer for traverse ll
    Node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
    cout<<endl;
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


// length of link list
// int getLength(Node* head)
// {
//     Node* temp=head;
//     int len=0;
//     while(temp!=NULL)
//     {
//         len++;
//         temp=temp->next;
//     }
//     return len;
// }

// insert at head
void insertAtHead(Node* &head, Node* &tail, int data)
{

    // empty ll
    if(head==NULL)
    {
        // STEP1 CREAETE a new node
        Node* newNode=new Node(data);
        // step 2
        head=newNode;
        tail=newNode;
    }

    else{
        // non empty ll

        // create a new node
    Node* newNode=new Node(data);
    // attach new node to head node
    newNode->next=head;
    // update head
    head=newNode;
    }
    
}


// insert at tail
void insertAtTail(Node* &head,Node* &tail, int data)
{
    // empty ll
    if(head==NULL)
    {
        // create annew node
        Node* newNode=new Node(data);
        // step2 single node h entire ll me,
        // thats why head and tail is par point krva do
        head=new Node;
        tail=new Node;
    }

    else{
        // no empty ll
        // step1 create a newnode
        Node* newNode=new Node(data);
        // step2 tail node ko attach kro new node
        tail->next=newNode;
        // step 3 update tail
        tail=newNode;
    }
}


void createTail(Node* head, Node* &tail)
{
    Node* temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    // jb e loop khatam hoga then
    // apka temp wala pointer khada hoga
    // last node pr tb tail->temp
    // krke tail ko last node pr le aao
    tail=temp;
}


// insert at position
void insertAtPosition(Node* &head, Node* &tail, int data, int position)
{
    int length=findLength(head);
    // if(position<1)
    // {
    //     cout<<"can not insert, please enter a valid position"<<endl;
    //     return;
    // }
    // pos ki value len+1
    //int length=getLength(head);
     // note-->zz

// if pos<1 or pos=1 insert at head
     if(position<=1)
     {
        insertAtHead(head,tail,data);
     }
     
    if(position==1)
    {
        insertAtHead(head,tail,data);
    }
    // if(position>length)
    // {
    //     cout<<"can not insert , please enter a valid position"<<endl;
    //     return;
    // }



    if(position==1)
    {
        insertAtHead(head,tail,data);
    }
    else if(position==length+1)
    {
        insertAtTail(head,tail,data);
    }
    // or


    // if pos=len+1 
    // pos>len
    // so insert at tail
    else if(position>length)
    {
        insertAtTail(head,tail,data);
    }

    else if(position>length+1)
    {
        insertAtTail(head,tail,data);
    }
    else{
        // insert at middle of ll
        //   step 1: create a new node
        Node* newNode=new Node(data);

        // step2: traverse prev// curr to position
        Node* prev=NULL;
        Node* curr=head;
        while(position!=1)
        {
            prev=curr;
            curr=curr->next;
            position--;
        }

        // step 3: attach prev to new node
        prev->next=newNode;
        // step 4: attach new node to curr
        newNode->next=curr;
    }
}

void deleteNode(Node* &head, Node* &tail, int position)
{
    // empty ll
    if(head==NULL)
    {
        cout<<"cannot delete, coz ll is empty"<<endl;
        return;
    }

    if(head==tail)
    {
        // single element
        Node* temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
        return;
    }

    
    int len=findLength(head);
    // delete from head
    if(position==1)
    {
        // delete first node
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;

    }
    else if(position==len)
    {
        // delete last node
        // find prev
        Node* prev=head;
        while(prev->next!=tail)
        {
               prev=prev->next;
        }

        // prev node k link null karo
        prev->next=NULL;

        // delete node
        delete tail;

        // update tail
        tail=prev;


    }

    else{
        // delete from middle node

        // step 1: set prev/curr pointers
        Node* prev=NULL;
        Node* curr=head;
        while(position!=1)
        {
            position--;
            prev=curr;
            curr=curr->next;
        }
        // step 2: prev->next me curr k next node add kro
        prev->next=curr->next;

        // step 3: node isolate kro
        curr->next=NULL;

        // step 4: delete node
        delete curr;

    }
}
int main()
{

    // 1 method print ll.......
    Node* head=NULL;
    Node* tail=NULL;

    insertAtHead(head,tail,50);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,10);
    printLL(head);
    cout<<endl;

    // deleteNode(head,tail,1);
    // printLL(head);
    // cout<<endl;

    // or.......
    cout<<"before->length of ll is:"<<findLength(head)<<endl;
    cout<<"before tail->"<<tail->data<<endl;
    deleteNode(head,tail,1);
    cout<<"after length of ll:"<<findLength(head)<<endl;
    cout<<"after tail->"<<tail->data<<endl;
    //insertAtPosition(head,tail,1000,5);
    //printLL(head);
// 2 method print ll...................
//     // 2. creation ofnode
//     //Node* head=new Node();
//     // create more node similar to this
//     Node* first=new Node(10);
//     Node* second=new Node(20);
//     Node* third=new Node(40);
//     Node* fourth=new Node(60);
//     Node* tail=fourth;

//     first->next=second;
//     second->next=third;
//     third->next=fourth;

//     // ll create ho chuki h

// // 3. print ll
//     Node* head=first; //original ll
//     cout<<"printing the entire ll: "<<endl;
//     printLL(head);

//     cout<<"length of linked list: "<<getLength(head);

//     insertAtHead(head,tail,500);
//     printLL(head);

//     insertAtTail(head,tail,1000);
//     printLL(head);
    return 0;
}