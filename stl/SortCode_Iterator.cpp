#include<iostream>
using namespace std;
int main()
{
  vector<int> v={2,3,5,6,7};
// this is range base loop.................
// &->refrence give us actual values...
for(int &value:v)
{
cout<<value<<" ";
}
cout<<endl;
// or...................
for(int &value:v)
{
value++;
}
for(int value:v)
{
cout<<value<<" ";
}
cout<<endl;

// 2 way.................................
vector<int> v={2,3,5,6,7};
for(int i=0;i<v.size();++i)
{
cout<<v[i]<<"";
}
cout<<endl;

// 3 way.................................
vector<int>::iterator it;
for(it=v.begin();it!=v.end();++it)
{
cout<<(*it)<<" ";
}

// now vector of pair in iterator..................
vector<pair<int,int> >v_p={{1,2},{2,3}};
for(pair<int,int>&value:v_p)
{
cout<<value.first<<" "<<value.second<<" ";
}cout<<endl;


// auto keyword->it take dynamically value....
vector<int>v={2,3,5,6,7};
// auto in replace of iterator->vector<int>::iterator it;
for(auto it=v.begin();it!=v.end();++it)
{
cout<<(*it)<<" ";
}cout<<endl;

// 2 way.................
// in case of vector of pair
vector<pair<int,int> >v_p={{1,2}, {2,3}};
for(auto &value:v_p)
{
cout<<value.first<<" "<<value.second<<" ";
}cout<<endl;

// 3 way....
auto a=1.0;
cout<<a<<endl;

