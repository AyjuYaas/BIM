/* Transpose m*n matrix */

#include<stdio.h>
int main(){

    int m, n, i, j;
    printf("\nEnter the Dimension of Matrix: ");
    scanf("%d %d", &m, &n);

    int a[m][n];

    printf("\nEnter the Elements for Matrix A:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe Transposed Matrix:\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}