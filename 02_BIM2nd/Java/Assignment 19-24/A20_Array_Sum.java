import java.util.*;
public class A20_Array_Sum {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.print("\nEnter the no. of elements: ");
        int n = scan.nextInt();

        int[] arr = new int[n];
        int i, sum = 0;
        for(i=0; i<n; i++){
            System.out.print((i+1)+". : ");
            arr[i] = scan.nextInt();
            sum += arr[i];
        }

        System.out.println("Sum = "+sum);
    }
}
