class Solution {
  public static int maxProfit(int[] prices) {
      int maxcurr = 0 , max = 0; 
      for(int i = 1; i<prices.length; i++){
          if(maxcurr < 0)
              maxcurr = 0;
          maxcurr = maxcurr+(prices[i] - prices[i-1]);
          max = Math.max(maxcurr,max);
      }
      return max;
  }
  public static void main(String[] args) {
    int [] arr = {7,1,5,3,6,4};
    System.out.println(maxProfit(arr));
  }
}