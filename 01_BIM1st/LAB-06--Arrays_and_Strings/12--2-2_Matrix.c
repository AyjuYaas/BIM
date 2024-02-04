/* Create a 2*2 matrix */

#include<stdio.h>

int main(){
    
    int a[2][2], i, j;

    printf("\nEnter the Elements for Matrix A:\n");
    for(i=0;i<2; i++){
        for(j=0; j<2; j++){
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe Matrix:\n");
    for(i=0;i<2; i++){
        for(j=0; j<2; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;

}