
import java.util.Scanner;

public class ClimbingStarts {
    public static void main(String[] args) {
        int nthNumber;
        Scanner scanner=new Scanner(System.in);
        System.out.println("Enter the Number : ");
        nthNumber = scanner.nextInt();

        int[] dp=new int[nthNumber+1];

        dp[0]=0;
        dp[1]=1;
        dp[2]=2;

        for(int i=3; i<=nthNumber; i++){
            dp[i]=dp[i-1]+dp[i-2];
        }

        System.out.println("Nth Fibonacci Number is : "+dp[nthNumber]);

    }
}
