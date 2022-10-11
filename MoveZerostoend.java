import java.util.*;

void moveZeros(int arr[],int n)
{
  int count=0;
  
  for(int i=0;i<n;i++)
  {
    if(arr[i]!=0)
    {
      swap(arr[i],arr[count]);
      count++;
    }
  }
}

public static void main(String[] args)
{
  Scanner s=new Scanner(System.in);
  int n=s.nextInt();
  int[] arr=new int[n];
  
  for(int i=0;i<arr.length;i++)
  {
    arr[i]=s.nextInt();
  }
  
  moveZeros(arr,n);
}
  
