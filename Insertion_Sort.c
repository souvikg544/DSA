#include <stdio.h>
#include <stdlib.h>

void printArr(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
}

void insertionSort(int arr[] , int n)
{
    int key , j ;

    for (int i = 1; i <= n - 1 ; i++)
    {
        /* code */
        key = arr[i] ;
        j = i - 1 ;

        while(arr[j] > key && j >= 0)
        {
            arr[j+1] = arr[j] ;
            j-- ;
        }
        arr[j+1] = key ;
    }
    
}

int main()
{
    int N;
    printf("Enter no. of elements you want to input : ");
    scanf("%d", &N);
    int *A = (int *)malloc(N * sizeof(int));

    printf("Enter the elements here \n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    printArr(A, N);
    insertionSort(A, N);
    printf("Sorted Array :");
    printArr(A, N);
    return 0;
}
