#include<stdio.h>

int main(){

    int m, n, p, q, i, j, k;

    begin:
    printf("Enter the dimension for 1st Matrix A (row*column): ");
    scanf ("%d*%d", &m, &n);

    printf("Enter the dimension for 2nd Matrix B (row*column): ");
    scanf ("%d*%d", &p, &q);

    int a[m][n], b[p][q], r[m][q];

    if (n!=p){
        printf ("Cannot be multiplied\n");
        printf("Try Again\n");
        goto begin;
    }

    printf("For Matrix A:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf ("A[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("For Matrix B:\n");
    for(i=0; i<p; i++){
        for(j=0; j<q; j++){
            printf ("B[%d][%d]", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0; i<m; i++){
        for(j=0; j<q; j++){
            r[i][j] = 0;
        }
    }

    for(i=0; i<m; i++){
        
        for(j=0; j<q; j++){

            for(k=0; k<n; k++){

                r[i][j] += (a[i][k]*b[k][j]);

            }
        }
    }

    printf("The Multiplied Matrix\n");
    for(i=0; i<m; i++){
        for(j=0; j<q; j++){
            printf (" %d ", r[i][j]);
        }

        printf("\n");
    }

}