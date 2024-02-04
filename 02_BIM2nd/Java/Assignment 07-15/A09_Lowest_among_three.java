import java.util.*;

public class A09_Lowest_among_three {
    public static void main(String[] args){
        System.out.println("Lowest Among Three Numbers");
        System.out.println("\nEnter three Numbers: ");
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        int c = scan.nextInt();
        scan.close();
        if(a<b && a<c){
            System.out.println(a + " is lowest");
        }
        else if(b<c){
            System.out.println(b + " is lowest");
        }
        else{
            System.out.println(c + " is lowest");
        }
    }
}
