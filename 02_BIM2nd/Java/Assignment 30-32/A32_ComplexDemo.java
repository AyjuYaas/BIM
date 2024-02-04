import java.util.*;

class Complex {
    int real, img, rsum, isum;
    void getSum(Complex c1,Complex c2){
        rsum = c1.real + c2.real;
        isum = c1.img + c2.img;
    }
}

class A32_ComplexDemo {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        Complex c1 = new Complex();
        Complex c2 = new Complex();
        Complex result = new Complex();

        System.out.println("Enter the real and imaginary part of 1st complex number: ");
        c1.real = scan.nextInt();
        c1.img = scan.nextInt();

        System.out.println("Enter the real and imaginary part of 2nd complex number: ");
        c2.real = scan.nextInt();
        c2.img = scan.nextInt();

        result.getSum(c1, c2);

        System.out.println("The Sum is: " + result.rsum + "+" + result.isum + "i");
    }
}
