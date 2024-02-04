import java.util.*;

public class A37_StringHandle {
    public static void main(String[] args) {
        String[] str = new String[4];
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the names of students");
        for(int i = 0; i<4; i++){
            str[i] = new String();
            System.out.print("Student " + (i+1) + ": ");
            str[i] = scan.nextLine();
        }
        System.out.println("\nNames of student starting with letter t:");
        for(int i = 0; i<4; i++){
            if(str[i].startsWith("T") || str[i].startsWith("t")){
                System.out.println(str[i]);
            }
        }
    }    
}
