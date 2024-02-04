import java.util.*;
public class A13_Simple_Calculator {
    public static void main(String[] args){
        int num1, num2;
        System.out.println("\nSimple Calculation");
        Scanner scan = new Scanner(System.in);
        System.out.print("\nEnter A number operator and a number (eg: 2+3): ");
        num1 = scan.nextInt();
        char operator = scan.next().charAt(0);
        num2 = scan.nextInt();
        scan.close();
        float result = 0;
        switch(operator){
            case '+': result = num1 + num2; 
            break;
            
            case '-': result = num1 - num2;
            break;

            case '*' : result = num1 * num2;
            break;

            case '/' : result = (float)num1 / (float)num2;
            break;

            default: System.out.println("Operator Not Found");
        }
        System.out.println(result);
    }
}
