import java.util.ArrayList;
import java.util.Arrays;
public class array {
    public static void main(String args[]) {

        int arr1[] = {9,9,9};
        int arr2[] = {2,8};
        int n1 = arr1.length;
        int n2 = arr2.length;
        sum_of_two_array(arr1,arr2,n1,n2);
    }
    static void sum_of_two_array(int arr[],int arr1[],int n1,int n2){
        int[] sum = new int[n1 > n2 ?n1:n2];
        int c=0;
        int i = arr.length-1;
        int j = arr1.length-1;
        int k = sum.length-1;

        while(k>0){
            int d = c;
            if(i>=0){
                d = d + arr[i];
            }
            if(j>=0){
                d = d+ arr1[j];

            }
            c = d/10;
            d = d%10;
            sum[k] = d;
            i--;
            j--;
            k--;

        }
        if(c!=0){
            System.out.print(c+" ");
        }
        for(int val : sum){
            System.out.print(val+" ");
        }
    }


        // Question 2   rotate array k times


    }

//    static void rotate(int arr[] ,int start, int end){
//
//
//    }
//}
