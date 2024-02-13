#include<iostream>
using namespace std;

class Stack{
    public:
    int* arr;
    int size;
    int top;

    Stack(int size)
    {
        arr=new int[size];
        this->size=size;
        this->top=-1;
    }

    void push(int data)
    {
        // tc->o(1)
        if(top==size-1)
        {
            cout<<"Stack overflow"<<endl;
            return;
        }
        else{
            top++;
        arr[top]=data;
        }
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack underflow"<<endl;
            return;
        }
        else{
             top--;
        }
    }

    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }

        else{
            return false;
        }
    }

    int getTop()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }

        else{
             return arr[top];
        }
    }

    int getSize()
    {
        return top+1;
    }

    void print()
    {
        cout<<"Top: "<<top<<endl;
        cout<<"Top element: "<<getTop()<<endl;
        cout<<"Stack: ";
        for(int i=0;i<getSize();i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};


int main()
{
    // creation
    Stack st(8);

    // push
    st.push(10);
    st.print();

    st.push(20);
    st.print();

    st.push(30);
    st.print();

    st.pop();
    st.print();

    cout<<"Top element: "<<st.getTop()<<endl;
     cout<<"Size of Stack: "<<st.getSize()<<endl;

     if(st.isEmpty())
     {
        cout<<"Empty"<<endl;
     }
     else{
        cout<<"Not Empty"<<endl;
     }
    return 0;
}