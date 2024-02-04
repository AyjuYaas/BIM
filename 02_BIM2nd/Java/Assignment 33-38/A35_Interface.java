import java.util.*;

interface Shape {
    public void get();
    public void display();    
}

class Rectangle implements Shape{
    int a, b;
    public void get(){
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter length and breadth: ");
        a = scan.nextInt();
        b = scan.nextInt();
    }   

    public void display(){
        int area = a * b;
        System.out.println("Rectangle Area = " + area);
    } 
}

class Square implements Shape{
    int a;
    public void get(){
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter length: ");
        a = scan.nextInt();
    }   

    public void display(){
        int area = (int)Math.pow(a, 2);
        System.out.println("Square Area = " + area);
    } 
}

class A35_Interface {
    public static void main(String[] args) {
        Rectangle r1 = new Rectangle();
        Square s1 = new Square();
        r1.get();;
        r1.display();
        s1.get();
        s1.display();
    }    
}
