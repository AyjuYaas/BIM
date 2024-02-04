import java.util.*;

class Student {
    String name;
    int age;

    void input(){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter your name: ");
        name = scan.nextLine();
        System.out.print("Enter age: ");
        age = scan.nextInt();
    }
}

class A31_Student {
    public static void main(String[] args){
        Student[] st = new Student[5];
        int i;
        for(i = 0; i<5; i++){
            System.out.println("\nStudent no. "+(i+1));
            st[i] = new Student();
            st[i].input();   
        }

        System.out.println("\nStudent with age greater or equal to 24 are:");
        for(i=0; i<5; i++){
            if(st[i].age >= 24){
                System.out.println(st[i].name);
            }
        }
    }
}
