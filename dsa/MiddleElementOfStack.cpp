#include<iostream>
#include<stack>
using namespace std;



void solve(stack<int> &st, int& pos, int &ans)
{
    // bc
    // if(pos==1)
    // {
    //     return st.top();
    // }

    if(pos==1)
    {
        //ans=st.top();
        cout<<"deleting"<<st.top()<<endl;
        return;
    }

    // 1 case hum solve krenge
    pos--;
    int temp=st.top();
    st.top();

    // recursion
    solve(st,pos,ans);

    // bactrack
   st.push(temp);

   //insertAtBottom(st,temp);
}


// void sortStack(stack<int> &st)
// {
//     // bc
//     if(st.empty())
//     {
//         return;
//     }

//     // 1 case
//     int temp=st.top();
//     st.pop();

//     // recursion
//     sortStack(st);

//     // backtrack
//    // insertSorted(st,temp);
// }


int getMiddleElement(stack<int> &st)
{
    int size=st.size();
    if(st.empty())
    {
        cout<<"stack is empty, no middle element"<<endl;
        return -1;
    }

    else{
        // stack is not empty
        // odd case
        int pos=0;
        if(size & 1)
        {
            pos=size/2+1;
        }

        else{
            // even
            pos=size/2;
        }

        int ans=-1;
        solve(st,pos,ans);
        return ans;
    }
}

// void insertSorted(stack<int> &st, int element)
// {
//     // bc
//     if(st.empty() || element>st.top())
//     {
//         st.push(element);
//         return;
//     }

//     // 1 case sambalna h
//     int temp=st.top();
//     st.top();

//     // recursion sambalhega
//     insertSorted(st,element);

//     // backtrack
//     st.push(temp);
// }

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    //insertSorted(st,5);
    // while(!st.empty())
    // {
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }

    cout<<"before size"<<st.size()<<endl;
    int mid=getMiddleElement(st);
    cout<<"Middle element"<<mid<<endl;
    cout<<"after size"<<st.size()<<endl;
    return 0;
}