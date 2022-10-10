package com.saatvik;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.PriorityQueue;

public class array {
    public static void main(String args[]) {


        int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
        System.out.println(maxSubArray(arr));
    }
    static int maxSubArray(int[] arr) {

        int n = arr.length;
        int currsum = arr[0];
        int maxsum  = currsum;
        for(int i =1;i<n;i++){
            currsum =  Math.max(arr[i], arr[i]+currsum);
            maxsum = Math.max(currsum,maxsum);

        }
        return maxsum;
    }
}
