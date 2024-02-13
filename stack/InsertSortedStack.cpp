#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st, int &element)
{
    // bc
    if(st.empty())
    {
        st.push(element);
        return;
    }

    // 1 case me solve krunga
    int temp=st.top();
    st.pop();

    // bakki recursion
    insertAtBottom(st,element);

    // backtrack
    st.push(element);
}


void reverseStack(stack<int> &st)
{
    // bc
    if(st.empty())
    {
        return;
    }

    // 1 case me solve krega
    int temp=st.pop();
    st.pop();

    // recursion 
    reverseStack(st);

    // backtrack
    insertAtBottom(st,temp);
}


void insertSorted(stack<int> &st, int element)
{
    // bc
    if(st.empty() || element>st.top())
    {
        st.push(element);
        return;
    }

    // 1 case sambalna h
    int temp=st.pop();
    st.pop();

    // recursion sambalega
    insertSorted(st,element);

    // backtrack
    st.push(temp);
}

// sort stack
void sortStack(stack<int> &st)
{
    // bc
    if(st.empty())
    {
        return;
    }

    // 1 case
    int temp=st.pop();
    st.pop();

    // recursion
    sortStack(st);

    // backtrack
    insertSorted(st,temp);
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    // int element=400;

    // insertAtBottom(st,element);

    // reverseStack(st);
    // cout<<"without reverse"<<endl;
    sortStack(st);
    insertSorted(st,25);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}