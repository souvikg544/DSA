// Richest Customer Wealth
// URL: https://leetcode.com/problems/richest-customer-wealth/

package com.akshat;

public class maxWealth {

    public static void main(String[] args) {

        int[][] accounts = {{1,5},{7,3},{3,5}};

        System.out.println(maximumWealth(accounts));

    }

    static int maximumWealth(int[][] accounts) {
        int max = Integer.MIN_VALUE;
        for(int r=0; r<accounts.length; r++){
            int sum=0;
            for (int c=0; c<accounts[r].length; c++){
                sum=sum+accounts[r][c];
            }
            if(sum>max){
                max=sum;
            }
        }
        return max;
    }

}
