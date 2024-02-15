#include<iostream>
using namespace std;

int main()
{
  int a[10];
vector<int> v;
// 2way
double a[10];
vector<double> v;

// 3 way...
double a[10];
vector<pair<int,int> >v;
// ...........

// for print vector.............
void printVec(vector<int> &v)
// pass vector by reference so that it does not make copy of vector 
// it pass as a actual vector

{
  cout<<"size: "<<v.size()<<endl;
  // tc of v.size()->1
for(int i=0;i<v.size();i++)
{
cout<<v[i]<<"";
}
cout<<endl;
}
// ..............................
int main()
{
  vector<int> v;
int n;
cin>>n;
for(int i=0;i<n;++i)
{
// take value
int x;
cin>>x;
  // push_back ->it add value at the end of array/vector
v.push_back(x);      //tc -o(1)
}
printVec(v);

// note->we add locally 10^5 till value if add more than ->give run time error values  and
// in dynamically->10^7............


}
// another method...of vector............
int main()
{
  vector<int> v(10,3);
  // 10 rep->array /vector of 10 size
  // 3 rep->declare 3 value to each element till 10 pos
  
v.push_back(7);
printVec(v);

  // pop_back->it eliminates the last element/value from the vector......
  v.pop_back();
  printVec(v); //tc->O(1)

  // copy value of vector
  v.push_back(4);
  v.push_back(5);

  vector<int> &v2=v;    //tc->O(n)
  v2.push_back(9);
  printVec(v);
  printVec(v2);
  
}

// 4th type...................
void printVec(vector<string> &v)
{
cout<<v.size()<<endl;
for(int i=0;i<v.size();++i)
{
cout<<v[i]<<"";
}
v.push_backk(abc);
cout<<endl;
}

vector<string>v;
int main()
{
  vector<string>v;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
string s;
cin>>s;
v.push_back(s);
}
printVec(v);
}
