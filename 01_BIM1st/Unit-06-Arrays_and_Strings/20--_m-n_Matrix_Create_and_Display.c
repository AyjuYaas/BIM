#include<stdio.h>

int main(){

    /* INITIALIZATION */
    int m, n, i, j;

    /* GETTING VALUES */
    printf ("Enter the no. of rows: ");
    scanf ("%d", &m);
    printf ("Enter the no. of columns: ");
    scanf ("%d", &n);
    int a[m][n];

    printf ("\nMatrix A(%d*%d) is to be created\n", m, n);

    for (i=0; i<m; i++){
        
        for (j=0; j<n; j++){
            printf ("Enter the value for matrix A[%d][%d]: ", i, j);
            scanf ("%d", &a[i][j]);
        }

    }

    /* PRINTING VALUE */

    printf ("\nThe Matrix A =\n");
    
    for (i=0; i<m; i++){
        
        printf ("|");
        for (j=0; j<n; j++){
            printf (" %d ", a[i][j]);
        }
        printf ("|\n");
    }

    return 0;
}