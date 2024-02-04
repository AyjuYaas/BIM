#include<stdio.h>
#include<stdio.h>

int main(){

    begin:
    int a, b, i, j;
    
    printf("This program transposes a 2*2 Matrix");
    printf ("\n\nEnter the dimoenion (a*b): ");
    scanf ("%d*%d", &a, &b);

    int mat[a][b];
    int tran[b][a];

    if(a!=2 || b!=2){
        printf("\nPadhna aaudaina? GADHA!!");
        printf("\nTry Again\n\n");
        goto begin;
    }
    
    for(i=0; i<a; i++){
        for(j=0;j<b;j++){
            printf ("Enter the value for mat[%d][%d]: ", i, j);
            scanf ("%d", &mat[i][j]);
        }
    }

    for(i=0; i<a; i++){
        for(j=0;j<b;j++){
            tran[j][i] = mat[i][j];
        }
    }

    printf("\nThe original Matrix: \n");
    for(i=0; i<a; i++){
        for(j=0;j<b;j++){
            printf (" %d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nThe Transposed Matrix: \n");
    for(i=0; i<a; i++){
        for(j=0;j<b;j++){
            printf (" %d ", tran[i][j]);
        }
        printf("\n");
    }

    return 0;

}