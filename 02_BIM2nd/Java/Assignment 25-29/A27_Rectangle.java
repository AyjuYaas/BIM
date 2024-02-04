import java.util.*;

class Rectangle {
    double length, breadth, area;

    void computeArea(){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the length of Rectangle: ");
        length = scan.nextDouble();
        System.out.print("Enter the Breadth: ");
        breadth = scan.nextDouble();

        area = length*breadth;
    }

    void displayArea(){
        System.out.println(area);
    }
}
class A27_Rectangle {
    public static void main(String[] args){
        Rectangle t1 = new Rectangle();
        Rectangle t2 = new Rectangle();

        System.out.println("Enter the value for rectangle A");
        t1.computeArea();
        System.out.println("\nEnter the value for rectangle B");
        t2.computeArea();

        System.out.print("\n\nThe Rectangle with Greatest Area is ");
        if(t1.area > t2.area){
            System.out.print("A: ");
            t1.displayArea();
        }
        else{
            System.out.print("B: ");
            t2.displayArea();
        }
    }
}
