using System;

public class Palindrome
{
    public static void Main(string[] args)
    {
        //int num = 153;
        int num;
        Console.Write("Enter a number: ");
        num = int.Parse(Console.ReadLine());
        int rem, res = 0;
        int temp = num;//so that we don't lose the value of num
        while(num!=0){
            rem = num % 10;
            res = res + (rem * rem * rem);
            num = num / 10;
        }
        if(temp == res){
            Console.WriteLine ("Armstrong");
        }
        else{
            Console.WriteLine ("not Armstrong");
        }
    }
}