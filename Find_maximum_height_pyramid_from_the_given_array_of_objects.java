import java.util.*;

public class Find_maximum_height_pyramid_from_the_given_array_of_objects {
    public static int maxHeightPyramid(int arr[],int n)
    {
        int ans = 1;
        Arrays.sort(arr);
        int prev_width = arr[0];
        int prev_count = 1;
         
        int curr_width = 0;
        int curr_count = 0;
        for(int i=1;i<n;i++)
        {
            curr_width = arr[i];
            curr_count += 1;
            if(curr_width > prev_width && curr_count > prev_count)
            {
                prev_width = curr_width;
                prev_count = curr_count;

                curr_count = 0;
                curr_width = 0;

                ans++;
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        int arr[] = {10, 20, 30, 50, 60, 70};
        int n = arr.length;
        System.out.println("maximum height of pyramid is " + maxHeightPyramid(arr, n));
    }    
}
