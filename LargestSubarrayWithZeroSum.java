public class LargestSubarrayWithZeroSum {
    static int maxLen(int arr[], int n)
    {
        HashMap<Integer,Integer> mp=new HashMap<>();
        int prefixSum=0,maxi=0;
        
        for (int i=0;i<n;i++)
        {
            prefixSum+=arr[i];
            if (prefixSum==0)
            {
                maxi=i+1;
            }
            else
            {
                if (mp.get(prefixSum)!=null)
                    maxi=Math.max(maxi,i-mp.get(prefixSum));
                else
                    mp.put(prefixSum,i);
            }
        }

        return maxi;
    }

    public static void main(String[] args) {
        int[] a={15,-2,2,-8,1,7,10,23};
        System.out.println(maxLen(a, a.length));
    }
}
