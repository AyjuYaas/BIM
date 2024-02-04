// Write a Java Program to find the sum of two integers number s with user input and display the result

import java.util.*;

public class A03_Sum_user_input {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a, b, sum;
        System.out.println("\nSum of Two Numbers");
        System.out.print("\nEnter the 1st Number: ");
        a = sc.nextInt();
        System.out.print("\nEnter 2nd Number: ");
        b = sc.nextInt();

        sc.close();
        sum = a+b;
        System.out.println("\nSum = " + sum);

    }
}
