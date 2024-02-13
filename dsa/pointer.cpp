#include<iostream>
using namespace std;
int main()
{
    // int a=5;
    // int *ptr=&a;
    // cout<<sizeof(ptr)<<endl;

 
    // for chracter................
    // char ch='k';
    // char* cptr=&ch;
    // cout<<sizeof(cptr)<<endl;

    // for long.....................
    // long lachi=10;
    // long*  ptr=&lachi;
    // cout<<sizeof(ptr)<<endl;

    // homework............
    // read article 32 vs 64 bit->react
    // why ptr=8/4

    //  new cocept..................
    // int a=100;
    // int *ptr=&a;
    // a=a+1;
    // ptr=ptr+1;
    // *ptr=*ptr+1;
    // cout<<a<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;

    // .........................
    int a=100;
    int *ptr=&a;
    cout<<a<<endl;
    // cout<<&a<endl;
    // cout<<*a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
    cout<<(*ptr)++<<endl;
    cout<<++(*ptr)<<endl;
    // cout<<*ptr=*ptr/2<<endl;
    // cout<<*ptr=*ptr-2<<endl;

}
