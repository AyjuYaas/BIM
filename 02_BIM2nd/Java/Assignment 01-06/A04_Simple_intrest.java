// Write a java program to find the simple interest using user input

import java.util.*;
public class A04_Simple_intrest {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        System.out.println("\nCalculation of Simple Intrest");
        System.out.print("\nEnter Principal : ");
        float p = scan.nextFloat();
        System.out.print("\nEnter the time (in years) : ");
        float t = scan.nextFloat();
        System.out.print("\nEnter the Rate : ");
        float r = scan.nextFloat();
        scan.close();
        float si = (p*t*r)/100;
        System.out.println("\nSimple Intrest = " + si);

    }    
}