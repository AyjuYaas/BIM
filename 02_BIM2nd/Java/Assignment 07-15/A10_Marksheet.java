import java.util.*;
public class A10_Marksheet {
    public static void main(String[] args){
        int i, flag = 0;
        double total = 0;
        double a[] = new double[5];
        
        for(i=0; i<5; i++){
            Scanner scan = new Scanner(System.in);
            System.out.print("\nEnter marks of Subject "+(i+1)+": ");
            a[i] = scan.nextDouble();
            total += a[i];
            if(a[i] < 35){
                flag = 1;
            }
        }
        if(flag == 0){
            String div = "";
            System.out.println("\nPassed In All Subject");
            double per = (total/500)*100;
            System.out.println("Total Marks = " + total);
            System.out.println("Percentage = "+per+"%");
            if(per>=80 && per<=100){
                div = "Distinction";
            }
            else if(per>=70){
                div = "1st Div";
            }
            else if(per>=60){
                div = "2nd Div";
            }
            else if(per>=50){
                div = "3rd Div";
            }
            else if(per >= 30){
                div = "4th Div";
            }
            System.out.println("Divivsion = "+ div);
        }
        else{
            System.out.println("\nFailed");
        }
    }    
}
