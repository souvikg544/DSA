#include<iostream>
using namespace std;
class Solution{
    public:

    ListNode* mergeTwoLists(ListNode* left, ListNode* right)
    {
     if(left==0)
     return right;
     if(right==0)
     return left;

    ListNode*ans=new ListNode(-1);
    ListNode*mptr=ans;

    while(left && right)
    {
        if(left->val<=right->val)
        {
            mptr->next=left;
            mptr=left;
            left=left->next;
        }

        else{
            mptr->next=right;
            mptr=right;
            right=right->next;
        }

        // while(left!=NULL)
        // {
        //     IT CAB be wirte also 
        //     while(left)
        //     {

        //     }
        // }
// ..................
        // while(left)
        //     {
        //         mptr->next=left;
        //         mptr=left;
        //         left=left->next;
        //     }

        //            while(right)
        //     {
        //         mptr->next=right;
        //         mptr=right;
        //         right=right->next;
        //     }

        // ...or
        if(left)
        {
            mptr->next=left;
        }
        if(right)
        {
            mptr->next=right;
        }

        return ans->next;

    }
    }

}