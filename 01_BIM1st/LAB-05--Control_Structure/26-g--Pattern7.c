#include<stdio.h>

int main(){

    int i, j, k, a;

    printf("\n");
    for(i=-2; i<=2; i++){

        if(i<0)
            a = -i;
        else
            a = i;
        
        for(j=1; j<=a; j++){
            printf(" ");
        }
        for(k=5; k>=((2*a)+1); k--){
            printf("*");
        }
        printf("\n");

    }

    return 0;
}