/* Multiply m*n and p*q matrices */

#include<stdio.h>
#include<stdlib.h>
int main(){

    int m, n, p, q, i, j, k;
    printf("\nEnter the Dimensions For 1st Matrix:\n");
    scanf("%d %d", &m, &n);

    printf("Enter the Dimensions for 2nd Matrix:\n");
    scanf("%d %d", &p, &q);

    if (n != p){
        printf("\nThe Matrix Cannot be Multiplied");
        exit(1);
    }

    int a[m][n], b[p][q], res[m][q];
    printf("\nEnter the elements of 1st Matrix A:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the elements of 2nd Matrix B:\n");
    for(i=0; i<p; i++){
        for(j=0; j<q; j++){
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0; i<m; i++){
        for(j=0; j<q; j++){
            res[i][j] = 0;
        }
    }

    for(i=0; i<m; i++){
        for(j=0; j<q; j++){
            for(k=0; k<n; k++){
                res[i][j] += (a[i][k]*b[k][j]);
            }
        }
    }

    printf("\nThe resulting Matrix:\n");
    for(i=0; i<m; i++){
        for(j=0; j<q; j++){
            printf("%d\t", res[i][j]);
        }
        printf("\n");
    }
}