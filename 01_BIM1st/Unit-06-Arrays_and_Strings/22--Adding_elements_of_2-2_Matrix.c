#include<stdio.h>
int main(){

    int a[2][2] = {{1,2}, {3, 4}};
    int i, j, sum = 0;

    for (i=0; i<2; i++){
        
        for (j=0; j<2; j++){
            sum += a[i][j];
        }
        
    }

    printf ("The sum of the elements = %d", sum);

    return 0;
}