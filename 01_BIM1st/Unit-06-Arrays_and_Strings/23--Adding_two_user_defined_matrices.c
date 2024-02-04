/* Adding two user defined matrices */

#include<stdio.h>

int main(){

    int m,n;
    int p,q;
    int i, j;

    begin:
    printf ("Enter the rows and columns of your 1st matrix (A): ");
    scanf ("%d %d", &m, &n);
    int a[m][n];

    printf ("\nEnter the rows and columns of your 2nd matrix (B): ");
    scanf ("%d %d", &p, &q);
    int b[p][q];
    
    int c[m][n];

    if (m != p || n != q){
        printf ("\nUnequal dimensions detected! Cannot be added");
        printf ("\n Enter the values again");
        goto begin;
    }

    printf ("\nEnter the values of matrix A(%d*%d)\n", m, n);

    for (i=0; i<m; i++){

        for (j=0; j<n; j++){
            printf ("A[%d][%d]: ", i, j);
            scanf ("%d", &a[i][j]);
        }

    }

    printf ("\nEnter the values of matrix B(%d*%d)\n", p, q);
    for (i=0; i<p; i++){

        for (j=0; j<q; j++){
            printf ("The value for B[%d][%d]: ", i, j);
            scanf ("%d", &b[i][j]);
        }

    }

/****************** ADDING PORTION *****************/

    for (i=0; i<m; i++){

        for (j=0; j<n; j++){
            c[i][j] = a[i][j] + b[i][j];
        }

    }
    
    printf ("\nThe addded Matrix C(%d*%d):\n", m, n);
    for (i=0; i<m; i++){

        for(j=0; j<n; j++){
            printf (" %d ", c[i][j]);
        }
        printf ("\n");

    }

    return 0;
}