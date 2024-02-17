#include<iostream>
using namespace std;
// in unordered map
// 1. inbuilt implementation
// 2. time complexity
// 3. valid keys datatype
void print(unordered_map<int,string> &m)
{
  cout<<m.size()<<endl;
for(auto &pr:m)
{
cout<<pr.first<<" "<<pr.second<<endl;
}
}
int main()
{
  unordered_map<int,string>m;
m[1]="abc";   //use hash->tc->o(1)->avg tc 
m[3]="cdc";
m[6]="a"
m[5]="acd";
m[5]="cde";



  // find , erase, all->o(1)
  auto it=m.find(7);
  if(it!=m.end())
    m.erase(it);
  print(m);
}



// question: Given N strings and Q queries
// In each query u are gievn a string 
// print frequency of that string...
// N<=10^6
// |S|<=100
//Q<=10^6

#include<iostream>
using namespace std;
int main()
{
  unordered_map<string,int>m;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
string s;
cin>>s;
m[s]++;
}

int q;
cin>>q;
while(q--)
{
string s;
cin>>s;
cout<<m[s]<<endl;
}
}
  // multimap->store duplicate values..
