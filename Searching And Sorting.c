#include <stdio.h>

// A function to implement bubble sort
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		// Last i elements are already in place
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

// C function to implement recursive Binary Search
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		// If the element is present at the middle
		// itself
		if (arr[mid] == x)
			return mid;

		// If element is smaller than mid, then
		// it can only be present in left subarray
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		// Else the element can only be present
		// in right subarray
		return binarySearch(arr, mid + 1, r, x);
	}

	// We reach here when element is not
	// present in array
	return -1;
}

// Driver program to test above functions
int main()
{
    int ch;
    printf("Press 1: To sort an array\n");
    printf("Press 2: To search an element in array\n");
    printf("Enter your choice\n");
    scanf("%d",&ch);
    printf("Enter the size of array\n");
    int n,i,x=0,result=0;
    scanf("%d",&n);
    printf("Enter the elements in array\n");
    int arr[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	switch(ch)
	{
	    case 1:
        	bubbleSort(arr, n);
        	printf("Sorted array: \n");
        	printArray(arr, n);
        	return 0;
        	break;
        case 2:
            printf("Enter the element to be searched\n");
            scanf("%d",&x);
            result=binarySearch(arr,0,n-1,x);
            (result == -1)? printf("Element is not present in array\n"): printf("Element is present at index %d\n", result);
		    break;
		default:
		    printf("Wrong choice\n");
	}
}
