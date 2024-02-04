#include<stdio.h>

int main(){

    int a;

    printf("\nEnter an integer Value: ");
    scanf("%d", &a);

    if(a>=500){
        if(a<=1000){
            printf("\nIt is within the range of 500 - 1000");
        }
    }

    return 0;
}