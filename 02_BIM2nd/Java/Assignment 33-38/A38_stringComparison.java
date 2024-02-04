import java.util.*;

public class A38_stringComparison {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String[] str = new String[5];
        System.out.println("Enter the country's Name:");
        for(int i = 0; i<5; i++){
            str[i] = new String();
            System.out.print("Country "+(i+1)+": ");
            str[i] = scan.nextLine();
        }
        for(int i = 0; i<4; i++){
            for(int j=i+1; j<5; j++){
                if(str[i].compareTo(str[j]) > 0){
                    String temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }
        }
        System.out.println("Names of country in Ascending Order");
        for(int i = 0; i<5; i++){
            System.out.println(str[i]);
        }
    }    
}
