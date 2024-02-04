import java.util.*;
public class Q1_Fibonacii {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the nth item: ");
        int n = scan.nextInt();
        int i = 0;
        do{
            System.out.print(fibo(i) + " ");
            i = i+1;

        }while(fibo(i)<=n);
    }

    static int fibo(int n){
        if(n == 0){
            return 0;
        }
        else if(n == 1){
            return 1;
        }
        else{
            return (fibo(n-1) + fibo(n-2));
        }
    }
}
