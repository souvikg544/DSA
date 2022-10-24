class Solution {
public int firstMissingPositive(int[] nums) {
    
  HashSet<Integer>  numbers = new HashSet<>();
    
  // iterating over all the numbers present in nums 
  for(int num:nums){
      numbers.add(num);
  }
    
    
  for (int i = 1 ; i <=nums.length ; i++) {
       // if it is not contained then return the answer
        if (!numbers.contains(i)) {
            return i;
        }
    }
    
    return nums.length+1;
  }
}
