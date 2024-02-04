#include<stdio.h>

int main(){

    int i, j;

    printf("\n");
    for(i=6; i>=1; i--){

        if(i==6 || i==1){
            for(j=1; j<=6; j++){
                printf("* ");
            }
            printf("\n");
        }
        else{
            for(j=1; j<i; j++){
                printf("  ");
            }
            printf("*\n");
        }
    }
    return 0;
}