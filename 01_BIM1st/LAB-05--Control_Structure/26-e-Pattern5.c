#include<stdio.h>

int main(){

    int i, j, k;

    printf("\n");
    for(i=1; i<=3; i++){

        for(j=2; j>=i; j--){
            printf(" ");
        }
        for(k=1; k<=((2*i)-1); k++){
            printf("*");
        }
        printf("\n");

    }

    return 0;
}