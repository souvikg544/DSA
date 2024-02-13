#include<iostream>
using namespace std;

void shiftNegativeOneSide(int arr[],int n)
{
    int j=0;
    for(int index=0;index<n;index++)
    {
        if(arr[index]<0)
        {
            swap(arr[index],arr[j]);
            j++;
        }
    }
}

int main()
{
    int arr[]={7,-10,23,-11,-12,40,60};
    int n=7;
    shiftNegativeOneSide(arr,n);
    
    // print
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}