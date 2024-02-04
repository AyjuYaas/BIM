class fibonacci {
    static int fibo(int n) {
        if (n <= 2)
            return 1;
        else
            return fibo(n - 1) + fibo(n - 2);
    }

    public static void main(String[] args) {
        // For n terms
        int n = 10;
        for (int i = 1; i <= n; i++) {
            System.out.print(fibo(i) + " ");
        }
        System.out.println();

        // for nth term
        n = 105;
        int count = 1;
        while (fibo(count) <= n) {
            System.out.print(fibo(count) + " ");
            count++;
        }
    }
}
