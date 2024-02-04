import java.util.*;

interface Calculate {
    int say = 12;
    public int add(int x, int y);
    public int difference(int x, int y);    
}

class Testing implements Calculate{
    public int add(int x, int y){
        int sum = x+y;
        return sum;
    }
    public int difference(int x, int y){
        int diff = x - y;
        return diff;
    }
}

class A34_Testing{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        Testing t = new Testing();
        System.out.println("Enter two numbers: ");
        int a = scan.nextInt();
        int b = scan.nextInt();
    
        System.out.println("The Sum = "+ t.add(a, b));
        System.out.println("Difference = "+ t.difference(a, b));
    }
}
