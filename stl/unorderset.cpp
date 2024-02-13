#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int>s;
    for(int i=1;i<=10;i++)
    {
        s.insert(i);
    }

    cout<<"element resent in unoreder set";

    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    int n=2;
    if(s.find(2)!=s.end())
    cout<<n<<"is present in unordered set"<<endl;

    s.erase(s.begin());
    cout<<"element after delete 1 element";
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"size of unoredrer set"<<s.size()<<endl;

    if(s.empty()==false)
    cout<<"unoreder set not empty"<<endl;

    else
    cout<<"unoredr set is empty"<<endl;

    s.clear();
    cout<<"size of unoredr set after clear all element "<<s.size();




}