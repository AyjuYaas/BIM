/* Create a user defined square matrix */

#include<stdio.h>
#include<stdlib.h>
int main(){
    int m, n, i, j;
    printf("\nEnter the Dimensions for Square Matrix: ");
    scanf("%d %d", &m, &n);

    if (m != n){
        printf("Not a Square Matrix");
        exit(1);
    }

    int a[m][n];
    printf("Enter the Elements for Square Matrix A:\n");
    for(i=0;i<m; i++){
        for(j=0; j<n; j++){
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe Matrix:\n");
    for(i=0;i<m; i++){
        for(j=0; j<n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;

}