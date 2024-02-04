#include<stdio.h>
int main(){
    int row, col;
    printf("Enter the value of row and column:\n");
    scanf("%d %d", &row, &col);

    int i, j, arr1[row][col], arr2[row][col], arr3[row][col];

    //getting elements for first matrix
    for (i=0; i<row; i++){
        for (j=0; j<col; j++){
            printf("Enter for arr1[%d][%d]: \n", i, j);
            scanf("%d", (*(arr1+i)+j));
        }
    }

    //getting elements for second matrix
    for (i=0; i<row; i++){
        for (j=0; j<col; j++){
            printf("Enter for arr2[%d][%d]: \n", i, j);
            scanf("%d", *(arr2+i)+j);
        }
    }

    //adding elements of first and second matrix and assigning to third matrix 
    for (i=0; i<row; i++){
        for (j=0; j<col; j++){
            *(*(arr3+i)+j)=*(*(arr1+i)+j)+*(*(arr2+i)+j);
        }
    }

    //displaying elements of third matrix
    printf("\nSum is: \n");
    for (i=0; i<row; i++){
        for (j=0; j<col; j++){
            printf("%d\t", *(*(arr3+1)+j));
        }
        printf("\n");
    }
    return 0;
}