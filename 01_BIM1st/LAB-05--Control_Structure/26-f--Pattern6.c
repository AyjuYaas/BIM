#include<stdio.h>

int main(){

    int i, j, k;

    printf("\n");
    for(i=3; i>=1; i--){

        for(k=3; k>i; k--){
            printf(" ");
        }
        for(j=1; j<(2*i); j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}