#include<iostream>
using namespace std;

int countRev(string s){
  // if odd sized string then impossible to make pairs
if(s.size() & 1)
  return -1;

int ans=0;
stack<char>st;
for(char ch:s)
{
if(ch=='{')
{
st.push(ch);
}
else{
if(!st.empty() && st.top()=='{')
{
st.pop();
}
else
  st.push(ch);
}
}

// if stack is still not empty, let's count reversala
while(!st.empty())
{
char a=st.top();
st.pop();
char b=st.top();
st.pop();

if(a==b)
  ans+=1;
else
  ans+=2;
}
return ans;
