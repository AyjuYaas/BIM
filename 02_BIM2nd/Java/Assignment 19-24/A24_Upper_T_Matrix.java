import java.util.*;
public class A24_Upper_T_Matrix {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int[][] mat = new int[3][3];
        int i, j;
        System.out.println("Enter the elements of 3*3 matrix:");
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                mat[i][j] = scan.nextInt();
            }
        }

        System.out.println("The Upper Triangular Matrix is");
        for(i=0; i<3; i++){
            for(j=(3-i); j<3; j++){
                System.out.print("  ");
            }
            for(j=i; j<3; j++){
                System.out.print(mat[i][j] + " ");
            }
            System.out.println();
        }
    }
}
