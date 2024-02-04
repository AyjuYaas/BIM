class ArraySum {
    int sum;
    int Sum(int[] a){
        for(int i = 0; i<a.length; i++){
            sum += a[i];
        }
        return sum;
    }
}

class A29_ArraySum {
    public static void main(String[] args){
        int[] a = {22, 34, 56, 71, 99};
        ArraySum s = new ArraySum();
        int result = s.Sum(a);
        System.out.println("The Sum = "+result);
    }
}
