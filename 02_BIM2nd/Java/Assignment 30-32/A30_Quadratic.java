import java.util.*;

class Quadratic {
    double a, b, c, x1, x2;

    void Input(){
        Scanner scan = new Scanner(System.in);
        System.out.println("\nCalculation of Roots of Quadratic Equation");
        System.out.println("For a equation ax^2+bx+c, Enter value of a, b & c");
        a = scan.nextInt();
        b = scan.nextInt();
        c = scan.nextInt();
        scan.close();
    }

    double[] Calculate(){
        double[] res = new double[2];
        double root = (int)Math.pow(b, 2) - (4*a*c);
        if(root>=0){
            x1 = (-b + (int)Math.sqrt(root))/(2*a);
            x2 = (-b - (int)Math.sqrt(root))/(2*a);
        }
        else{
            return res;
        }
        res[0] = x1;
        res[1] = x2;
        return res;
    }
}

class A30_Quadratic {
    public static void main(String[] args){
        Quadratic eqn = new Quadratic();
        double[] res;
        eqn.Input();
        res = eqn.Calculate();
        if(res[0] == 0 && res[1]==0){
            System.out.println("Imaginary Roots");
        }
        else{
            System.out.println("The Two Roots are:");
            for(int i = 0; i<res.length; i++){
                System.out.println(res[i]);
            }
        }
    }
}
