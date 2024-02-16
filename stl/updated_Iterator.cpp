#include<iostream>
using namespace std;

int main()
{
vector<int> v={2,3,5,6,7};
for(int i=0;i<v.size();++i)
{
cout<<v[i]<<" ";
}
cout<<endl;
//iterator
vector<int> ::iterator it=v.begin();
cout<<(*it)<<endl;
cout<<(*(it+1))<<endl;
}

// use for loop...................
int main()
{
  vector<int> v={2,3,,6,7};
for(int i=0;i<v.size();++i)
{
cout<<v[i]<<" ";
}
cout<<endl;
vector<int> ::iterator it=v.begin();
for(it=v.begin();it!=v.end();++it)
{
cout<<(*it)<<endl;
}
}

// 3 wa...
