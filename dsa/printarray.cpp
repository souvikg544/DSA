#include<iostream>
using namespace std;
// void printArray(in arr[], int size, int index)
// {
//     // base case..
//     if(index>=size)
//     {
//         return ;
//     }

//     // processing...
//     cout<<arr[index]<<" ";

//     // recursive call...
//     printArray(arr,size,index+1);
// } 

bool searchArray(int arr[], int size, int target, int index)
{
    // base case
    if(index>=size)
    {
        return false;
    }
    if(arr[index]==target)
    {
        return true;
    }

    // recursive call..
    bool aageKaAns=searchArray(arr,size,target,index+1);
    return aageKaAns;
}
int main()
{
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;
    int target=50;
    cout<<"target found or not: "<<searchArray(arr,size,target,index)<<endl;
    // printArray(arr,size,index);
}