import java.util.*;
public class Q2_Sum {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Q2_Sum s = new Q2_Sum();
        System.out.println("Enter n terms: ");
        int n = scan.nextInt();
        int total_sum = s.sum(n);
        System.out.println("Sum = "+total_sum);
    }   
    
    int sum(int n){
        if(n==0){
            return 0;
        }
        else{
            return(n+sum(n-1));
        }
    }
}
