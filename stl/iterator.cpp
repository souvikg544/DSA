//how to access the element 
#include<iostream>
using namespace std;
vector<int>::iterator it=v.begin();
it++;
cout<<*(it)<<" ";
it=it+2;
cout<<*(it)<<" ";
vector<int>::iterator it=v.end();
vector<int>::iterator it=v.rend();
vector<int>::iterator it=v.rbegin();

cout<<v[0]<<" "v.at(0);
cout<<v.back()<<" ";

for(vector<int>::iterator it=v.begin(); it!=v.end(); it++)
{
    cout<<*(it)<<" ";
}

for(auto it=v.begin();it!=v.end();it++)
{
    cout<<*(it)<<" ";
}

for(auto it:v)
{
    cout<<it<<" ";
}

v.erase(v.begin()+1);

v.erase(v.begin()+2, v.begin() +4);

//insert function
vector<int>v(2,100);
v.insert(v.begin(),300);
v.insert(v.begin()+1, 2, 10);

vector<int> copy(2,50);
v.insert(v.begin(), copy.begin(), copy.end());

cout<<v.size();
v.pop_back();
v1.swap(v2);
v.clear();list.cpp

cout<<v.empty();


