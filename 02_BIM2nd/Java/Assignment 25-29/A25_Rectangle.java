import java.util.*;

class Rectangle {
    double length, breadth, area;

    void Set(){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the length of Rectangle: ");
        length = scan.nextDouble();
        System.out.print("Enter the Breadth: ");
        breadth = scan.nextDouble();
        scan.close();
    }

    void Calculate(){
        area = length*breadth;
        System.out.println("Area of the rectangle = " + area);
    }
}

class A25_Rectangle {
    public static void main(String[] args){
        Rectangle R = new Rectangle();
        
        R.Set();
        R.Calculate();
    }
}
