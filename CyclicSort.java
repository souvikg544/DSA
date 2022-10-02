import java.util.Arrays;

/*
Cyclic Sort->
    When given number from range 1 to N -> use cyclic sort.
    Array-> 3,5,2,1,4 {Here the numbers are jumbled but are from 1 to 5}
    Let N be 5
    When the array is sorted in that case all the numbers are going to be at their correct index
    So after sorting -> 1,2,3,4,5 { here after sorting the numbers will be at val-1 index}
    Index=value-1   because index starts from 0
    Might be you have given the array find the missing number
    You're given numbers from 1 to n find the duplicate number?

    Explanation->
    Array->   3,5,2,1,4
    1. Check is 3 at the correct index if not do 3-1=2 (index=value -1) the swap with correct index.
        2,5,3,1,4
    2. After swapping we know that 3 is at correct position now, but we do not know whether the other number that came
    at the position of 3 is correct or not. So, Check again.
        as 2 is not at correct index of 2-1=1 we would swap it with the correct index.
        5,2,3,1,4
        we would again check for 5
        4,2,3,1,5
        again for 4
        1,2,3,4,5
        now we will check whether 1 is at correct position, if it is then move forward and so on.

    We know that every unique item is only getting swapped once.
    Here we are not incrementing i when we are swapping so that might in more than n iterations of the loop.
    Worst Case->
        N-1(Swaps)
        N-1 + N
        2N-1
        O(N) ->Linear




 */

public class CyclicSort {
    public static void main(String[] args) {
        int[] arr={5,4,2,1,3};
        sort(arr);
        System.out.println(Arrays.toString(arr));
    }

    static void sort(int[] arr){
        int i =0;
        while(i<arr.length){
            int correct = arr[i]-1;
            if(arr[correct]!=arr[i]){
                swap(arr,i,correct);
            }
            else{
                i++;
            }

        }
    }

    static void swap(int[] arr,int first, int second){
        int temp=arr[first];
        arr[first]=arr[second];
        arr[second]=temp;
    }
}
