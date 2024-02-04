#include<stdio.h>

int main(){

    int a;
    printf("\nEnter a number: ");
    scanf("%d", &a);

    if(a>100){
        printf("\nIt is Greater than 100");
    }
    if(a<=100){
        printf("\nIt is Not Greater than 100");
    }

    return 0;

}