public class R3_fibonacci {
    static int fibonacci(int a) {
        if (a <= 1)
            return 1;
        else
            return (fibonacci(a - 1) + fibonacci(a - 2));
    }

    public static void main(String[] args) {
        int nthNumber = 55;
        int count = 0;
        int term = fibonacci(count);

        while (term <= nthNumber) {
            System.out.print(term + "\t");
            term = fibonacci(++count);
        }
    }
}
