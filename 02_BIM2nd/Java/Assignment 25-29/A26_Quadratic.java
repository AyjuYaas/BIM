import java.util.*;

class Quadratic {
    int a, b, c, x1, x2, root;

    public void Input(){
        Scanner scan = new Scanner(System.in);
        System.out.println("\nCalculation of Roots of Quadratic Equation");
        System.out.println("For a equation ax^2+bx+c, Enter value of a, b & c");
        a = scan.nextInt();
        b = scan.nextInt();
        c = scan.nextInt();
    }

    void Calculate(){
        root = (int)Math.pow(b, 2) - (4*a*c);
        if(root>=0){
            x1 = (-b + (int)Math.sqrt(root))/(2*a);
            x2 = (-b - (int)Math.sqrt(root))/(2*a);
        }

    }

    void Display(){
        if (root < 0){
            System.out.println("The Eqn Has Imaginary Roots");
        }
        else{
            System.out.println("The two roots are: " + x1 + ", " + x2);
        }
    }
}

class A26_Quadratic {
    public static void main(String[] args){
        Quadratic q = new Quadratic();
        q.Input();
        q.Calculate();
        q.Display();
    }    
}
