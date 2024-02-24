#include<bits/stdc++.h>
using namespace std;

int main()
{
  // create key 
map<pair<int,int> ,int>m;
pair<int,int> p1,p2;
p1={1,2};
p2={2,3};
cout<<(p1<p2); //1
cout<<(p1>p2); //2



  // similar for sets..
  // compare 1 element..which is big--op--1 else 0
  // similar concept for vector also...
  // map=key,value--in pair form also put..
  map<set<int>,int> m;
  set<int>s1={1,2,3};
  set<int> s2={2,3};
  cout<<(s1<s2);
}


// 2 example..........
int main()
{
  map<pair<string, string>,vector<int> >m;
  set<pair<int,int> >st;
  // print in sorted order 
  // input--print in nested form..
int n;
cin>>n;   //size of map
for(int i=0;i<n;++i)
{
string fn,ln;
int ct;
cin>> fn>> ln>> ct; // string me no of interger kitne h
for(int j=0;j<x;j++)
{
int x;
cin>>x;   // string me integer value..........
m[{fn,ln}].push_back(x);
}
}

// ..........
for(auto &pr:m)
{
auto &full_name=pr.first;    //or pr.first.first=first name
auto &list=pr.second;        //or pr.second.second=last name
cout<<full_name.first<<" "<<full_name.second;
cout<<list.size()<<endl;
for(auto &element:list)
{
cout<<element<<" ";
}
cout<<endl;
}
}
