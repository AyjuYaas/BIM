import java.util.*;
public class A23_Matrix_Determinant {
    public static void main(String[] args){
        int[][] a = new int[3][3];
        int i, j, p, q, det = 0;
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the Elements for Matrix A:");
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                System.out.print("A["+(i+1)+"]["+(j+1)+"]: ");
                a[i][j] = scan.nextInt();
            }
        }
        for(j=0; j<3; j++){
            p = ( ((int)Math.pow(2,j)) - (2*j) );
            q = ( ((int)Math.pow(2,j)) - (2*j) ) + (j%2 + 1);
            if(j%2 == 0){
                det += a[0][j] *( (a[1][p] * a[2][q]) - (a[2][p]*a[1][q]) );
            }
            else{
                det -= a[0][j] *( (a[1][p] * a[2][q]) - (a[2][p]*a[1][q]) );
            }
        }
        System.out.println("Determinant = " + det);
    }
}
