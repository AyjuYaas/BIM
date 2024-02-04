public class gcd {
    static int g(int a, int b) {

        if (b == 0)
            return a;

        else
            return g(b, a % b);

    }

    public static void main(String[] args) {
        System.out.println(g(5, 11));
    }
}
