using System;

public class Palindrome
{
    public static void Main(string[] args)
    {
        //int num = 153;
        int num, i, flag=0;
        Console.Write("Enter a number: ");
        num = int.Parse(Console.ReadLine());
        for(i=1;i<num;i++){
            if(num%i==0){
                flag++;
            }
        }
        if(flag>2){
            Console.WriteLine ("not Prime");
        }
        else{
            Console.WriteLine ("Prime");
        }
    }
}