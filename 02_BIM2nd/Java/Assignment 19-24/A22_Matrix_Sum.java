public class A22_Matrix_Sum {
    public static void main(String[] args){
        int[][] a = {{1, 2},{3, 4}};
        int[][] b = {{5, 6}, {7, 8}};
        int i, j;
        System.out.println("\nThe Matrix Sum:");
        for(i=0;i<2; i++){
            for(j=0; j<2; j++){
                System.out.print((a[i][j] + b[i][j])+ "\t");
            }
            System.out.println();
        }
    }   
}
