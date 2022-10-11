import java.util.*;
 
int remDups(int arr[],int n)
{
  int temp[n];
  temp[0]=arr[0];
  int res=1;
  for(int i=1;i<n;i++)
  {
    if(temp[res-1]!=arr[i])
    {
      temp[res]=arr[i];
      res++;
    }
  }
  for(int i=0;i<res;i++)
  {
    arr[i]=temp[i];
  }
  return res;
}

public static void main(String[] args)
{
  
 Scanner s=new Scanner(System.in);
  int n=s.nextInt();
  int[] arr=new int[n];
  
  for(int i=0;i<arr.length;i++)
  {
    arr[i]=s.nextInt;
  }
  System.out.print(remDups(arr,n));
}
  
