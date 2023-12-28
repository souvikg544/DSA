#include<iotsream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void push(Node** head_ref, int new_data)
{
    //allocate node
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    //move head pinter to new node
    (*head_ref)=new_node;
}
void insertAfter(Node* prev_node, int new_data)
{
    if(prev_node==NULL)
    {
        cout<<"given previous cannot be null";
        return;
    }
    //allocate new node
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
}