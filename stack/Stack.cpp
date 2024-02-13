#include<iostream>
#include<stack>
using namespace std;

int main()
{
    // creation
    stack<int> st;

    // insertion
    st.push(10);
    st.push(20);
    st.push(30);

    // size check
    cout<<"size of stack is:"<<st.size()<<endl;

    // REMOVE
    st.pop();

    // check empty
    if(st.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is non empty"<<endl;
    }
     
    //  top element
    cout<<st.top()<<endl;
}