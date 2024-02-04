import java.util.*;

abstract class Fmachine {
    abstract void getData();
    abstract void putData();     
}

class Airplane extends Fmachine{
    int code, capacity;
    String name; 
    void getData(){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter Code: ");
        code = scan.nextInt();
        System.out.print("\nEnter Name: ");
        name = scan.nextLine();
        System.out.print("\nEnter Capacity: ");
        capacity = scan.nextInt();
    }    

    void putData(){
        System.out.println("Code: " + code + 
                            " Name" + name + 
                            " Capacity: " + capacity + 
                            "Added");
    }
}


class A36_Abstract {
    public static void main(String[] args) {
        Airplane A1 = new Airplane();
        Airplane A2 = new Airplane();

        A1.getData();
        A1.putData();
        A2.getData();
        A2.putData();
    }    
}
