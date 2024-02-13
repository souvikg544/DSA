#include<iostream>
using namespace std;
int f(int n)
{
    if(n<=1)
    return n;
    int lst=f(n-1);
    int slst=f(n-2);
    return lst+slst;
}

int main()
{
    cout<<f(4);
    return 0;
}