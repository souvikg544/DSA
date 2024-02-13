#include<iostream>
using namespace std;
class Solution{
    public:
    void linkdelete(struct Node *head, int M, int N)
    {
        if(!head)
        return;
        Node* it=head;
        // for m nodes
        for(int i=0;i<M-1;++i)
        {
            // if m nodes are available 
            if(!it)
            return;
            it=it->next;
        }
        // it would be at M node
        if(!it)
        return;

        Node* MthNode=it;
        it=MthNode->next;

        // for N nodes
        for(int i=0;i<N;++i)
        {
            if(!it)
            break;
            Node* temp=it->next;
            delete it;
            it=temp;
        }

        MthNode->next=it;
        linkdelete(it,M,N);
    }
}