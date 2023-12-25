
import java.util.Arrays;
import java.util.Scanner;

public class ClimbingStarts {
    protected int climbingStarts(int n, int[] dp) {
        if (n <= 2) return n;

        if (dp[n] != -1) return dp[n];
        return dp[n] = climbingStarts(n - 1, dp) + climbingStarts(n - 2, dp);

    }

    public static void main(String[] args) {
        int nthNumber;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the Number : ");
        nthNumber = scanner.nextInt();
        int[] dp = new int[nthNumber + 1];
        ClimbingStarts climbingStarts = new ClimbingStarts();
        Arrays.fill(dp, -1);
        System.out.println("Nth Fibonacci Number is : " + climbingStarts.climbingStarts(nthNumber, dp));

    }
}
