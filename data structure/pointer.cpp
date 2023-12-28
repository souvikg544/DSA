#include<iostream>
using namespace std;
int main()
{
    // change value using pointer in c++
    int num=5;
     cout<<"a before"<<num<<endl;
    int a=num;
    a++;
    cout<<"a after"<<num<<endl;

    int *p=&num;
    cout<<"before"<<num<<endl; 

    (*p)++;
    cout<<"after"<<num<<endl;
// copying a pointer..
    int *q=p;
    cout<<p<<"-"<<q<<endl;
    cout<<*p<<"-"<<*q<<endl;

    //important concept..
    int i=3;
    int *t=&i;
    cout<<(*t)++<<endl;
    *t=*t+1;
    cout<<*t<<endl;

    // before t
    cout<<"before t"<<t<<endl;
    t=t+1;
    cout<<"after t"<<t<<endl;
}