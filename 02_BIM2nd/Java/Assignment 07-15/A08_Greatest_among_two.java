import java.util.*;
public class A08_Greatest_among_two {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.println("\nGreatest Among Two Numbers");
        System.out.println("\nEnter two Numbers : ");
        int a = scan.nextInt();
        int b = scan.nextInt();
        scan.close();
        if(a>b){
            System.out.println(a + " is greatest");
        }
        else{
            System.out.println(b + " is greatest");
        }
    }
}
