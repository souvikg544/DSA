#include<iostream>
using namespace std;

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

