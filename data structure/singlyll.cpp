#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // constructor in linked list
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// insert a node at the head of the linked list
void InsertAtHead(Node* &head, int d) {
    // create a new node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}


//insert attail
void InsertAtTail(Node* &tail, int d)
{
    //create new node..
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}

// print the linked list
void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

//insert at position..
void insertAtPosition(Node* &head, int position, int d)
{
    if(position==1)
    {
        insertAtHead(head, d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    //create a node for d
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}
int main() {
    Node* node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head points to node1
    Node* head = node1;
    print(head);
    // InsertAtHead(head, 12);
     InsertAtTail(head, 12);
    print(head);
    InsertAtTail(head, 15);
    print(head);
    //insertatposition..
    insertAtPosition(head,3,22);
    print(head);
    return 0;
}
