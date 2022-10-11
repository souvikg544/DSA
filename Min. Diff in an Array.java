import java.util.*;

int minDiff(int[] arr, int n)
{
  int diff=Integer.MAX_VALUE;
  
for(int i=0;i<n-1;i++)
{
  for(int j=i+1;j<n;j++)
  {
    if(Math.abs((arr[i] - arr[j]))<diff)
      diff =Math.abs((arr[i]-arr[j]));
  }
}
  return diff;
}
public static void main(String[] args)
{
  Scanner s=new Scanner(System.in);
  int n =s.nextInt();
  int[] arr=new int[n];
  
  for(int i=0;i<arr.length;i++)
  {
    arr[i]=s.nextInt();
  }
  System.out.print("Minimum Difference is -" + minDiff(arr,arr.length));
}
