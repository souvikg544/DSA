
#include <iostream>

using namespace std;

int Partition(int a[],int lb, int ub)
{
   int  pivot=a[lb];
   int  st=lb;
   int  end=ub;
    while(st<end)
    {
        while(a[st]<=pivot)
        {
            st++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(st<end)
        {
            swap(a[st],a[end]);
        }
    }
    swap(a[lb],a[end]);
    return end;
}

void quickSort(int a[],int lb, int ub)
{
    if(lb<ub)
    {
       int loc=Partition(a,lb,ub);
        quickSort(a,lb,loc-1);
        quickSort(a,loc+1,ub);
    }
}
int main()
{
    cout<<"Hello World";
    int a[] = { 10, 7, 8, 9, 1, 5 };
    int N = sizeof(a) / sizeof(a[0]);
 
    // Function call
    quickSort(a, 0, N - 1);
    printf("Sorted array: \n");
    for (int i = 0; i < N; i++)
        // printf("%d ", a[i]);
    cout<<a[i]<<endl;
    return 0;
}
