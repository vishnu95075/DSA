package Memorization;
import java.util.Arrays;
import java.util.Scanner;

public class NthFibonacciNumber {
    protected int nthFibonacci(int n, int[] dp){
        if(n<=1) return n;

        if(dp[n]!= -1) return dp[n];
        return dp[n]= nthFibonacci(n-1,dp) + nthFibonacci(n-2,dp);

    }
    public static void main(String[] args) {
        int nthNumber;
        Scanner scanner=new Scanner(System.in);
        System.out.println("Enter the Number : ");
        nthNumber = scanner.nextInt();
        int[] dp=new int[nthNumber+1];
        NthFibonacciNumber nthFibonacciNumber = new NthFibonacciNumber();
        Arrays.fill(dp,-1);
        System.out.println("Nth Fibonacci Number is : "+nthFibonacciNumber.nthFibonacci(nthNumber,dp));

    }
}
