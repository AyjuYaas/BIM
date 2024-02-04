public class R2_factorial {
    static int factorial(int a) {
        if (a <= 1)
            return 1;
        else
            return (a * factorial(a - 1));
    }

    public static void main(String[] args) {
        int a = 8;
        int fact = factorial(a);
        System.out.println("The factorial of " + a + " = " + fact);
    }
}
