/* Create and Display 2*2 Matrix */

#include<stdio.h>

int main(){

    int i, j;
    int a[2][2] = {{1,2}, {3, 4}};

    for (i=0; i<2; i++){

        printf ("|");
        
        for (j=0; j<2; j++){
            printf (" %d ", a[i][j]);
        }
        
        printf ("|\n");
    }

    return 0;
}