#include<bits/stdc++.h>
using namespace std;
void printqueue(queue<int> q1)
{
    queue<int> q2=q1;
    while(!q2.empty())
    {
        cout<<q2.front()<<"\n";
        q2.pop();
    }
}

int main()
{
    queue<int>q;
    for(int i=1;i<=5;i++)
    q.push(i);

    cout<<"elements of queue are:"<<endl;
    printqueue(q);

    cout<<"size of queue are"<<q.size()<<endl;
    cout<<"front element of queue"<<q.front()<<endl;
    cout<<"last element of queue are"<<q.back()<<endl;
    cout<<"emplace element are"<<endl;
    q.emplace(1);
    q.emplace(2);
    //q.emplace(3,4);
    
    cout<<"pop the front element"<<endl;
    q.pop();
    printqueue(q);
}