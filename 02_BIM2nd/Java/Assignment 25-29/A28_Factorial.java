import java.util.*;

class Factorial{
    int result = 1;
    int FindFact(int n){
        int i;
        for(i=1; i<=n; i++){
            result *= i;
        }
        return result;
    }
}

class A28_Factorial {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.print("\nEnter a number: ");
        int num = scan.nextInt();
        Factorial f = new Factorial();
        int r = f.FindFact(num);
        System.out.println("Factorial: "+ r);
    }
}
