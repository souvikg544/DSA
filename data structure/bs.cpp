#include<iostream>
using namespace std;
//first occ
int firstocc(int a[],int n,int key)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(a[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(key>a[mid]){
            //right me jao
            s=mid+1;
        }
        else if(key<a[mid])
        {
            e=mid-1;
        }

        mid=s+(e-s)/2;
    }
    return ans;
}

int lastocc(int a[],int n,int key)
{
    int s=0, e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(a[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(key>a[mid])
        {
            s=mid+1;
        }
        else if(key<a[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){

int a[]={1,2,3,4,5,6};
cout<<"first occ of 3 is at index"<<(a,5,3)<<endl;
cout<<"last occ of 3 is at index"<<(a,5,3)<<endl;
return 0;
}