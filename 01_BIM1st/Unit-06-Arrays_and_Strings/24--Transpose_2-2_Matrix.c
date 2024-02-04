#include<stdio.h.>

int main(){

    int a[2][2] = {{1,2}, {3,4}};
    int b[2][2];
    int i, j, temp;

    for(i=0; i<2; i++){
        for (j=0; j<2; j++){
            b[i][j] = a[j][i];
        }
    }

    for(i=0; i<2; i++){
        for (j=0; j<2; j++){
            printf(" %d ", b[i][j]);
        }
        printf ("\n");
    }

    return 0;
}