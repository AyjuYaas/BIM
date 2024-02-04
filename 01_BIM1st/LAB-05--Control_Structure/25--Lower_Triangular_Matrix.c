#include<stdio.h>

void matrix();

int main(){

    matrix();

    return 0;
}

void matrix(){
    int a=1, b=0, i, j, k;

    printf("\nThe Lower Triangular Matrix is:\n");
    for(i=3; i>=1; i--){

        for(j=1; j<=i; j++){
            printf("%d ", a);
        }
        for(k=3; k>i; k--){
            printf("%d ", b);
        }

        printf("\n");
    }
}