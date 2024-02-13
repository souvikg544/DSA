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
void insertAtPosition(Node* &head, Node* &tail, int data, int position)
{
    if(position<1)
    {
        cout<<"cannot insert , please enter a valid position"<<endl;
        return;
    }
    int length=getLength(head);

    if(position>length)
    {
        cout<<"cannot insert, please enter a valid position"<<endl;
        return;
    }

    if(position==1)
    {
        insertAtHead(head,tail,data);
    }
    else if(position==length)
    {
        insertAtTail(head,tail,data);
    }
    else if(position==length+1)
    {
        insertAtTail(head,tail,data);
    }
    else{
        // insert at middle of link list
        // step1 craete a new node
        Node* newNode=new Node(data);
        // traverse prev//curr to position
        Node* prev=NULL;
        Node* curr=head;
        while(position!=1)
        {
            prev=curr;
            curr=curr->next;
            position--;
        }
        // step3 attch prev to new node
        prev->next=newNode;
        // step4 attch new ode to curr
        newNode->next=curr;
    }
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    insertAtPosition(head,tail,5,1);
    insertAtPosition(head,tail,100,4);
    printLL(head);
    printLL(head);
}

// note...........
< 1 and ==1 -->isert at head
>length -->insert at tail
else middle me insert hoga
pos==len+1 -->insert at tail
 