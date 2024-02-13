
class Node{
    int data;
    Node* next;
};
void printLL(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtHead(Node* &head,Node* &tail, int data)
{
    // note head ki value pass krenge pass by refernce(add) not value
    // empty ll->means head bbi null or tail bhi null
    // singly ll means head=tail both have equal value
    if(head==NULL)
    {
        // step1 create new node
        Node* newNode=new Node(data);
        // update head
        head=newNode;
        tail=newNode;
    }
    // else
    else{
        // non empty ll
         // create new node..
    Node* newNode=new Node(data);
    // attach new node to head node
    newNode->next=head;
    // update head
    head=newNode;
    }
   

}


// insert at tail............
void insertAtTail(Node* &head, Node* &tail, int data)
{
    // l empty
    if(head==NULL)
    {
        // CREATE NN
        Node* newNode=new Node(data);
        // single node h entire ll me
        head=newNode;
        tail=newNode;
    }
    else{
        // non empty ll
        Node* newNode=new Node(data);
        // attach new ode to tail
        tail->next=newNode;
        // update tail
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
    // jb ye lopp khatam ho rha hoga then tb
    // apka temp wala pointer khada hoga last node pr
    // tb tail=temp krke tail mo last node pr le aana
    tail=temp;
}
int main()
{
    // creation of node acc yo function
    Node* head=NULL;
    Node* tail=NULL;

    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtTail(head,tail,50);
    printLL(head);
    // // creation of node
    // Node* first=new Node(10);
    // Node* second=new Node(20);
    // Node* third=new Node(30);
    // Node* fourth=new Node(40);
    // Node*  fifth=new Node(50);
    // Node* tail=fifth;
    // insertAtHead(head,500);
    // printLL(head);
}