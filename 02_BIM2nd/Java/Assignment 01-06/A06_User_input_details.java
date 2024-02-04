//Write a java program to print your name,gender,DOB with user input

import java.util.*;

class A06_User_input_details{
    public static void main(String args[]){
        System.out.println("\nThis Program Prints Your Details");
        Scanner scan = new Scanner(System.in);
        System.out.print("\nEnter Your Name: ");
        String name = scan.nextLine();
        System.out.print("Enter Gender (M/F/O) : ");
        char gender = scan.next().charAt(0);
        System.out.println("\nFor Date of Birth : ");
        System.out.print("Enter Birth Year : ");
        int doby = scan.nextInt();
        System.out.print("Enter Birth Month : ");
        int dobm = scan.nextInt();
        System.out.print("Enter Birth Day : ");
        int dobd = scan.nextInt();
        scan.close();
        System.out.println("\n\nThe Details You've Entered Are : ");
        System.out.println("Name : " + name);
        System.out.println("Gender : " + gender);
        System.out.println("Date of Birth (yyyy/mm/dd) : "+doby+"/"+dobm+"/"+dobd);

    }
}