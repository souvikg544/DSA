#include<bits/stdc++.h>
using namespace std;

void printstack(stack<int>s1)
{
    stack<int>s2=s1;
    while(!s2.empty())
    {
        cout<<s2.top()<<"\n";
        s2.pop();
    }
}

int main()
{
    stack<int>s;
    for(int i=1;i<=5;i+++)
    {
        s.push(i);

    }

    cout<<"element of stack are:"<<endl;
    printstack(s);

    cout<<"size of stack"<<s.size()<<endl;

}
