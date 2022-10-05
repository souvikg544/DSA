package Java;

import java.util.Scanner;

public class Prime {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            System.out.println("Enter number : ");
            int num = sc.nextInt();
            
            System.out.println(num + checkIsPrime(num));
        } finally {
            sc.close();
        }
    }
    
    private static String checkIsPrime(int num) {
        for (int i = 2; i < Math.sqrt(num); i++) {
            if (num % i == 0) {
                return " is not Prime.";
            }
        }    
        
        return " is prime.";
    }
}
