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


// unorered set is used where order not matter, and chec for present in set

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


// ques: given n strings and q queries ,
// in each query u are a given string 
// print yes if string is present else print no
// n<=10^6 , s<=100 , q<=10^6

#include<iostream>
using namespace std;
int main()
{
  unordered_set<string>s;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
string str;
cin>>str;
  s.insert(str);
}
int q;
cin>>q;
while(q--)
{
string str;
cin>>str;
if(s.find(str)==s.end())
{
cout<<"no\n";
}
else{
cout<<"yes\n";
}
}
}




// Multiset.....allow to insert multiple values in a set..........
void print(multiset<string> &s)
{
for(string value:s)
{
cout<<value<<endl;
}
}

#include<iostream>
using namespace std;
int main()
{
  multiset<string>s;
  s.insert("abc");  //logn
  s.insert("zsdf");
s.insert("bcd");
  s.insert("abc");


  // use iterator->it remove only that value present not all but erase remove allrepeated values
  auto it=s.find("abc");
  if(it!=s.end())
  {
    s.erase(it);
  }
  // 2 way.........................
  s.erase("abc");
print(s);
  // mostly all op ->size inser clear find tae logn tc
  
}



