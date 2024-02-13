#include<iostream>
using namespace std;
void findInArray(int arr[],int size, int index, int target)
{
    // base case
    if(index>=size)
    {
        return -1;
    }

    // processing..
     if(index==target)
     {
        return index;
     }

    //  rr
    findInArray(arr.size,index+1,target);
}

int main()
{
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;
    int target=50;
    cout<<findInArray(arr,size,index,target);
}