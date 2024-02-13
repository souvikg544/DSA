#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int>s;
    for(int i=1;i<=10;i++)
    {
        s.insert(i);
    }
    s.insert(5);
    cout<<"element present in unoreder multiset";
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    //2 condition

    int n=2;
    if(s.find(2)!=s.end())
    cout<<n<<"is present in unoreder multiset";

    s.erase(s.begin());
    cout<<"element after delete the first element";
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    //size 
    cout<<"size of unoredred multiset"<<s.size()<<endl;


    if(s.empty()==false)
    cout<<"unoredred multiset is not empty"<<endl;

    else
    cout<<"unoredred multiset is empty"<<endl;

    s.clear();
    cout<<"size of delete all element in mutliset"<<s.size()<<endl;

    

}