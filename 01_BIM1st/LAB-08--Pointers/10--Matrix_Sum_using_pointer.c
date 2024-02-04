#include<stdio.h>

int main(){
    int m, n, i, j;
    printf("Enter the dimesions for the Matrix:\n");
    scanf("%d %d", &m, &n);

    int a[m][n], b[m][n], c[m][n];

    printf("Enter the 1st Matrix:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("a[%d][%d]: ", i, j);
            scanf("%d", *(a+i)+j);
        }
    }

    printf("Enter the 2nd Matrix:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("a[%d][%d]: ", i, j);
            scanf("%d", *(b+i)+j);
        }
    }

    //Printing the Matrix using Pointer
    printf("\nThe Matrix Sum:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            *(*(c+i)+j) = *(*(a+i)+j) + *(*(b+i)+j);
            printf("%d\t", *(*(c+i)+j));
        }
        printf("\n");
    }

    return 0;
}