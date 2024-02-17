#include<iostream>
using namespace std;
// map store ey value pair..it create mapping from a key to value..also kown as mapping ds
// store in sorted order..they are implement via Red Blac Tree...
// dec of map..
// tc of map->o(logn)

void print(map<int,string> &m)
{
cout<<m.size()<<endl;
for(auto &pr:m)
{
  
  // tc of access map ->o(logn)
cout<<pr.first<<" "<<pr.second<<endl;
}

int main()
{
  map<int, string>m;
m[1]="abc";
m[5]="cdc";
m[3]="acd";
// 2 type...
m.insert({4,"afg"});
// iterator..
map<int,string> :: iterator it;
for(it=m.begin();it!=m.end();++it)
{
cout<<(*it).first<<" "<<(*it).second<<endl;
}


  // in place of iterator..................
  // or.........................
for(auto &pr:m)
{
    cout<<pr.first<<" "<<pr.second<<endl;
}


  // 3 way...........
  map<int,in>m;
  m[6]=4;
  print(m);

  // map consist of unique values...not store duplicate value...
  // it replace existing values...
  


  // use of find...............
  auto it=m.find(3);
  if(it==m.end())
  {
    cout<<"No Value";
  }
  else{
    cout<<(*it).first<<" "<<(*it).second<<endl;
  }



  
//   now erase....
//it take two type of input
// 1->key
// 2 ->iterator
m.erase(3); //o(logn)

  // 2 way.........
  auto it=m.find(5);
  if(it!=m.end())
  m.erase(it);

  // clear..
  m.clear();
  // it prnt 0 size map..
print(m);



  // comparsion of string........taes o(n) ................
  map<string,string>m;
  m["abcd"]="abcd"; //s.size()*log(n)
}



// question: Given N strings, print unique strings
// in lexiographical order with their frequency
// N<=10^5
// |S|<=100

#include<iostream>
using namespace std;
int main()
{
  map<string,int>m;
int n;
cin>>n;
for(int i=0;i<n;++i)
{
string s;
cin>>s;
// m[s]=m[s]+1;
m[s]++;
}
for(auto pr:m)
{
cout<<pr.first<<" "<<pr.second<<endl;
}
}
