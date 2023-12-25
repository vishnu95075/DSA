import java.util.Scanner;

class NthFibonacciNumber{
    public static void main(String[] args) {

        int nthNumber;
        Scanner scanner=new Scanner(System.in);
        System.out.println("Enter the Number : ");
        nthNumber = scanner.nextInt();

        int prev=1,lastNext=1;
        for(int i=3; i<=nthNumber; i++){
            int temp = prev+lastNext;
            prev=lastNext;
            lastNext=temp;
        }
        System.out.println("Number is "+lastNext);
    }
}