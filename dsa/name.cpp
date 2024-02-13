#include<iostream>
using namespace std;
void f(i,n)
{
    if(i>n)
    return;
    cout<<"raj"<<endl;
    f(i+1,n);
}
int main()
{
    int n,i;
    cin>>n;
    f(1,n);
}