/* Transpose a user defined Matrix */

#include<stdio.h>

int main(){

    int m, n, i, j;

    printf ("\nThis Program Transposes a Matrix\n");
    printf("Enter the dimension (row*column): ");
    scanf ("%d*%d", &m, &n);

    int mat[m][n];
    int tran[n][m];

    for(i=0; i<m; i++){
        for(j=0;j<n;j++){
            printf ("Enter the value for mat[%d][%d]: ", i, j);
            scanf ("%d", &mat[i][j]);
        }
    }

    printf("\nThe Transposed Matrix\n");
    for(i=0; i<n; i++){
        for(j=0;j<m;j++){
            printf (" %d ", mat[j][i]);
        }
        printf("\n");
    }
}