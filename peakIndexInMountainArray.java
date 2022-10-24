class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        // binary search
        int l=0,u=arr.length-1;
        while(l<u){
            int mid = (l+u)/2;
            if(arr[mid]>arr[mid+1]){
                u = mid;
            }else{
                l=mid+1;
            }
            
        }
        return l;
    }
}
