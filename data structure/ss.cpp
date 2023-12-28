// binary search
#include<iostream>
using namespace std;

int bs(int arr[],int n,int target)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<=e)
    {
        //found=
        if(arr[mid]==target)
        {
            return mid;
        }

        else if(target>arr[mid])
        {
            s=mid+1;
        }
        else if(target<arr[mid])
        {
             e=mid-1;
        }

        // mid upate
        mid=(s+e)/2;
    }

    return -1;
    
    }
int findTotalOccurence(int arr[],int n,int target)
{
    int firstOcc=findfirstOccurence(arr,n,target);
    int lasOcc=findlastOccurence(arr,n,taregt);
    int total=lastOcc-firstOcc+1;
}
int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90};
    int n=9;
    int target=90;
    int ansIndex=bs(arr,n,target);

    if(ansIndex==-1)
    {
        cout<<"element no tfound"<<endl;
    }

    else{
        cout<<"element found at index"<<ansIndex<<endl;
    }

    return 0;
}