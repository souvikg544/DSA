#include<iostream>
using namespace std;
int bs(int a[],int n,int k)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(a[mid]==k)
        {
            return mid;
        }

        else if(k>a[mid])
        {
            s=mid+1;
        }

        else{
            e=mid-1;
        }

        mid=s+(e-s)/2;

    }

    return -1;
}

int main()
{
    int a[6]={3,4,5,6};
    int index=bs(a,6,5);

    cout<<"element 5 are"<<index<<endl;
}