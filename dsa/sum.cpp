#include<iostream>
using namespace std;
// int sum(int n)
// {
//     if(n==0)
//     return 0;
//     return n+sum(n-1);
// }
// int main()
// {
//     int n=3;
//     cout<<sum(n);
//     return 0;
// }

int fact(int n)
{
    if(n==0||n==1)
    return 0;
    return n*fact(n-1);
}
int main()
{
    int n=4;
    cout<<fact(n);
    return 0;
}