class sumOfNNumbers {
    static int SON(int n) {
        if (n == 0)
            return 0;
        else
            return (n + SON(n - 1));
    }

    public static void main(String[] args) {
        System.out.println(SON(5));
    }
}
