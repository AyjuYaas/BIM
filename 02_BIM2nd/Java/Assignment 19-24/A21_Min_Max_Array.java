import java.util.*;
class A21_Min_Max_Array{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int num = scan.nextInt();
        int[] arr = new int[num];
        int i;
        System.out.println("Enter the elemets: ");
        for(i=0; i<num; i++){
            System.out.print((i+1) + ": ");
            arr[i] = scan.nextInt();
        }
        int small = arr[0];
        int big = arr[0];
        for(i=1; i<num; i++){
            if(small > arr[i]){
                small = arr[i];
            }
            if(big<arr[i]){
                big = arr[i];
            }
        }
        System.out.println("\nSamllest = " + small + "\nLargest = " + big);
    }
}