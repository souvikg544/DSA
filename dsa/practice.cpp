#include<iostream>
#include<limits.h>
using namespace std;

void printArray(int arr[][4],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}


void colWisePrint(int arr[][4],int row,int col)
{
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<arr[j][i]<<" ";
        }cout<<endl;
    }
}


bool findTarget(int arr[][4],int row,int col,int target)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==target)
            {
                return true;
            }
        }
    }
    return false;
}


int findMax(int arr[][4],int row,int col)
{
    int maxAns=INT_MIN;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]>maxAns)
            {
                maxAns=arr[i][j];
            }
        }
    }
    return maxAns;
}

void rowWiseSum(int arr[][4],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
}

void colWiseSum(int arr[][4],int row,int col)
{
    for(int i=0;i<col;i++)
    {
        int sum=0;
        for(int j=0;j<row;j++)
        {
            sum=sum+arr[j][i];
        }
        cout<<sum<<endl;
    }
}

void diagonalSum(int arr[][4],int row,int col)
{
    int sum=0;
    for(int i=0;i<row;i++)
    {
        sum=sum+arr[i][i];
    }
    cout<<sum;
}

void transpose(int arr[][4],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=i;j<col;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
}
int main()
{
    int arr[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,1,11},
        {12,24,86,79},
        };
        
        int row=4;
        int col=4;
        
        printArray(arr,row,col);
        colWisePrint(arr,row,col);
        
        int target=11;
        cout<<"found or not: "<<findTarget(arr,row,col,target)<<endl;
        
        cout<<"find max "<<findMax(arr,row,col)<<endl;
        cout<<"row wise sum"<<endl;
       rowWiseSum(arr,row,col);
       cout<<"col wise sum"<<endl;
       colWiseSum(arr,row,col);
       cout<<"diagonalSum"<<endl;
       diagonalSum(arr,row,col);
       cout<<"transpose"<<endl;
       transpose(arr,row,col);
       printArray(arr,row,col);
        return 0;
    }
