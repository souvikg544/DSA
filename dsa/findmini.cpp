#include<iostream>
using namespace std;
void findMin(int arr[],int size, int index, int & mini)
{
    // base case
    if(index>=size)
    {
        return;
    }

    // processing..
    mini=min(mini, arr[index]);

    // recurisve call..
    findMin(arr,size,index+1, mini);
    cout<<"minimum no in arrays: "<<mini<<endl;
}

int main()
{
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;
    int mini=INT_MAX;
    findMin(arr,size,index,mini);
    cout<<"minimum no in arrays: "<<mini<<endl; 

}