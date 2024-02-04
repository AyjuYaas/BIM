import java.util.*;
public class Q3_GCD {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter two numbers: ");
        int num1 = scan.nextInt();
        int num2 = scan.nextInt();
        System.out.println("GCD = " + gcd(num1, num2));
    }

    static int gcd(int n1, int n2){
        if(n2!=0){
            return gcd(n2, n1%n2);
        }
        else{
            return n1;
        }
    }
}
