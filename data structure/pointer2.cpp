#include<iostream>
using namespace std;
int main()
{
    int arr[10]={2, 5,6,41};
    cout<<"address of first memor block"<<arr<<endl;
    cout<<"address of first memor block"<<&arr[0]<<endl;
    cout<<arr[0]<<endl;
    cout<<&arr[0]<<endl;
    cout<<*arr <<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<(*arr)+1<<endl;
    cout<<(*arr)++<<endl;
    cout<<arr[2]<<endl;
    cout<<(*arr+2)<<endl;//doubt
    cout<<*(arr+2)<<endl;

    int i=3;
    cout<<i[arr]<<endl;

    int temp[10];
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl;


    int *h=&temp[0];
    cout<<sizeof(h)<<endl;
    cout<<sizeof(*h)<<endl;
    cout<<sizeof(&h)<<endl;

    //give same address 
    int a[20]={1,2,3,5};
    cout<<&a<<endl;
    cout<<a<<endl;
    cout<<&a[0]<<endl;
    
}