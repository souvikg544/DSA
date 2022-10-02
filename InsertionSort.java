import java.util.Arrays;

/*
Insertion Sort->
    Array-> 5,3,4,1,2
    For every index put that index element at the correct index of LHS.
    1st pass-
        i=1;
        j=0
        key=arr[i]=3
        5,3,4,1,2
        j
        3,5,4,1,2
    2nd pass-
        i=2;
        j=1;
        3,5,4,1,2
          j         key=4
        j >= 0 && arr[j] > key?
        arr[j + 1] = arr[j];
        j = j - 1;
        3,5,5,1,2
        j           key=4
        j >= 0 && arr[j] > key?
        arr[j + 1] = arr[j];
        j = j - 1;
        3,3,5,1,2
        arr[j+1]=key
        3,4,5,1,2
    3rd pass-
    4th pass-

    Time complexity->
        1.Worst Case-> O(n^2)
        2.Best Case-> O(n)

    Why to use Insertion sort?
    1.Adaptive : Steps get reduced if array is sorted i.e. no.of swaps are reduced as compared to bubble sort.
    2.Stable Sorting Algorithm
    3.Used for smaller values of n: works good when array is partially sorted. it takes part in hybrid sorting algorithm.


 */

public class InsertionSort {
    public static void main(String[] args) {
        int[] arr = {6,5,4,3,7,9,1,2,33,45,656,78,43,23,321,535,232,574,67};
//        sort(arr);
        insertionSort(arr);
        System.out.println(Arrays.toString(arr));
    }

    static void anotherMethod(int[] arr)
    {
        int n = arr.length;
        for (int i = 1; i < n; ++i) {
            int key = arr[i];
            int j = i - 1;

            /* Move elements of arr[0..i-1], that are
               greater than key, to one position ahead
               of their current position */
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;

            }
            arr[j + 1] = key;

        }
    }

    static void insertionSort(int[] arr){
        for(int i=0;i<=arr.length -2;i++){
            for(int j=i+1; j>0;j--){
                if(arr[j]<arr[j-1]){
                    swap(arr,j,j-1);
                }
                else{
                    break;
                }
            }
        }
    }

    static void swap(int[] arr,int first, int second){
        int temp=arr[first];
        arr[first]=arr[second];
        arr[second]=temp;
    }

}
