#include<stdio.h>

int p, q;
void tran(int x[p][q]);

int main(){

    int i, j;

    printf("Enter the dimension of the matrix A:\n");
    printf("Enter the no. of rows: ");
    scanf("%d", &p);
    printf("Enter the no. of columns: ");
    scanf("%d", &q);
    int mat[p][q];

    printf("Enter the Elements of the matrix:\n");
    for (i=0; i<p; i++){
        for(j=0; j<q; j++){
            printf("A[%d][%d]: ", (i+1), (j+1));
            scanf("%d", &mat[i][j]);
        }
    }

    tran(mat);

    return 0;
}

void tran(int x[p][q]){

    printf("The Oroginal Matrix:\n");
    int i, j;
    for(i=0; i<p; i++){
        for(j=0; j<q; j++){
            printf(" %d", x[i][j]);
        }
        printf("\n");
    }

    printf("\nThe transposed Matrix:\n");
    for(i=0; i<q; i++){
        for(j=0; j<p; j++){
            printf(" %d", x[j][i]);
        }
        printf("\n");
    }
}
