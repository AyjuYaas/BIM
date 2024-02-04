//Write a java program to find the Compound interest

import java.util.*;

class A05_Compound_Intrest{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        double principle, rate, time;
        int n = 12;
        
        System.out.println("\nCalculation of Compound Intrest Compounded Monthly");
        System.out.print("\nEnter Principle : ");
        principle = scan.nextDouble();
        
        System.out.print("\nEnter Time (in Years) : ");
        time = scan.nextDouble();
        
        System.out.print("\nEnter the Rate : ");
        rate = scan.nextDouble();

        scan.close();

        double power = Math.pow((1+(rate/(n*100))), (time*n));
        n = 12;
        double compound = (principle * power) - principle; 
        System.out.println("\nCompound Intrest :" + compound);
    }
}