import java.util.*;
class A11_Days_in_a_month {
    public static void main (String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.println("\nChoose the Month");
        System.out.println("Enter the Month Number : ");
        int choice = scan.nextInt();
        if(choice <= 0 || choice >12){
            System.out.println("Invalid Month");
        }
        else if (choice == 4 || choice == 6 || choice == 9 || choice == 11){
            System.out.println("No. of Days = 30");
        }
        else if (choice == 2){
            System.out.println("No of Days = 28");
        }
        else {
            System.out.println("No of Days = 31");
        }
        scan.close();
    }
}