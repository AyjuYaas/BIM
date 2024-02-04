import java.util.*;
public class Q4_factorial {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Q4_factorial f = new Q4_factorial();
        System.out.print("Enter a number: ");
        int num = scan.nextInt();
        System.out.println("Factorial = " + f.factorial(num));
    }   
    
    int factorial(int n){
        if(n==1){
            return 1;
        }
        else{
            return(n*factorial(n-1));
        }
    }
}
