/* Add two 2*2 Matrices */

#include<stdio.h>

int main(){

    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{3, 4}, {5, 6}};
    int c[2][2], i, j;

    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            c[i][j] = a[i][j] + b[i][j];
        } 
    }

    printf ("\nThe 1st Matrix is:\n");
    for (i=0; i<2; i++){ 
        for (j=0; j<2; j++){
            printf ("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf ("\nThe 2nd Matrix is:\n");
    for (i=0; i<2; i++){ 
        for (j=0; j<2; j++){
            printf ("%d\t", b[i][j]);
        }
        printf("\n");
    }

    printf ("\nThe Sum of two Matrices is:\n");
    for (i=0; i<2; i++){ 
        for (j=0; j<2; j++){
            printf ("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
