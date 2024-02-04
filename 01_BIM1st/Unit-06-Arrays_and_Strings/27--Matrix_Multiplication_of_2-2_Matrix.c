#include<stdio.h>

int main(){

    int a[2][2];
    int b[2][2];
    int r[2][2];

    int i, j, k;

    printf ("Enter the matrix A:\n");
    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            printf ("A[%d][%d]: ", i, j);
            scanf ("%d", &a[i][j]);
        }
    }

    printf ("\nEnter the matrix B:\n");
    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            printf ("B[%d][%d]: ", i, j);
            scanf ("%d", &b[i][j]);
        }
    }

    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            r[i][j] = 0;
        }
    }

    printf("\n");

    for(i=0; i<2; i++){

        for(j=0; j<2; j++){

            for(k=0; k<2; k++){

                r[i][j] += a[i][k]*b[k][j]; 

            }
        }
    }

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf(" %d ", r[i][j]);
        }
        printf("\n");
    }

    return 0;
}