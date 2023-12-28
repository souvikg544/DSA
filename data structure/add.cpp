#include<iostream>
using namespace std;
int main()
{
    int n=5;
    cout<<n<<endl;
    //address of operator

    cout<<"add of n is:"<<&n<<endl;

    // char *p=&ch;
    // cout<<*p<<endl;
    // //*p=value at p ->print 
    // double *ptr=&d;
    // int *p=&n;

    int *ptr=&n;
    cout<<"value at ptr"<<*ptr<<endl;

    double d=4.2;
    double *p2=&d; 

    cout<<"address is:"<<p2<<endl;
    cout<<"value is:"<<*p2<<endl;

    cout<<"size of integer is"<<sizeof(n)<<endl;
    cout<<"size of pointer is"<<sizeof(p2)<<endl;
    cout<<"size of pointer is"<<sizeof(*ptr)<<endl;

    ////
    int i=5;
    int *p=0;
    p=&i;
    cout<<p<<endl;
    cout<<*p<<endl;

    int *q=0;
    q=&i;
    cout<<q<<endl;
    cout<<*q<<endl;

    return 0;

    
}