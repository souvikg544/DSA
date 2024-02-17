#include<iostream>
using namespace std;
// set ->it is a set of keys if remove values in map then set of eya called set
// normal,unordered, multiset 
// print in sorted oredr->set
//for print set
void print(set<string> &s)
{
for(string value:s)
{
cout<<value<<endl;
}

// for(auto it=s.begin();it!=s.end();++it)
// {
// cout<<(*it)<<endl;
// }
  
}


int main()
{
  set<string> s;
// set<set> s;
s.insert("abc");  //logn
s.insert("zsdf");
s.insert("bcd");  //logn
auto it=s.find("abc");
  if(it!=s.end())
  {
    cout<<(*it);
    s.erase(it);
    cout<<(*it);
  }
   // or...........
    s.erase("bcd");
print(s);
}



// Question:..Given N strings , print unique strings
// in lexiographical order 
// N<=10^5
// |s|<=100000

#include<iostream>
using namespace std;
int main()
{
  set<string>s;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
string str;
cin>>str;
s.insert(str);
}

for(auto value:s)
{
cout<<value<<endl;
}
}

// unordered set.........tc->o(1)...
int main()
{
  unordered_set<string>s;
s.insert("abc"); //0(1)
s.insert("zsdf");
s.insert("bcd");
s.insert("abc");

auto it=s.find("abc"); //o(1)
if(it!=s.end())
{
s.erase(it);
}
e.erase("bcd");
print(s);
}



