class Main
{
    public static int kadane(int[] arr)
    {
        int maxSoFar = 0;
        int maxEndingHere = 0;
        for (int i: arr)
        {
            maxEndingHere = maxEndingHere + i;
            maxEndingHere = Integer.max(maxEndingHere, 0);
            maxSoFar = Integer.max(maxSoFar, maxEndingHere);
        }
 
        return maxSoFar;
    }
 
    public static void main(String[] args)
    {
        int[] arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
 
        System.out.println("The sum of subarray with the " +
                            "largest sum is " + kadane(arr));
    }
}
