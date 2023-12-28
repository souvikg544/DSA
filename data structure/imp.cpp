#include<iostream>
using namespace std;
int main()
{
    int a[20]={1,2,3};
    cout<<"->"<<&a[0]<<endl;
    int *p=&a[0];
    cout<<"->"<<&p<<endl;


    //array store ponter in array
    int arr[10];
    int *ptr=&arr[0];
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;


}
