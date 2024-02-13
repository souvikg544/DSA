#include<iostream>
using namespace std;

// void solve(int *arr, int size)
// {
//     cout<<"inside solve-> arr"<<arr<<endl;
//     cout<<"inside solve-> &arr"<<&arr<<endl;
// }
// int main()
// {
//     int arr[]={10,20,30,40,50};
//     solve(arr,5);
//     cout<<"inside main->arr:"<<arr<<endl;
//     cout<<"inside main->&arr"<<&arr<<endl;
// }

// 2............
void solve(int arr[])
{
    *arr=*arr+1;
    cout<<*arr<<endl;
}

int main()
{
    int arr[]={10,20,30};
    solve(arr);
}