#include<stdio.h>

int main(){

    int a;

    printf("\nEnter a number: ");
    scanf("%d", &a);

    if (a%2==0){
        printf("\nIt is Even");
    }
    else{
        printf("\nIt is Odd");
    }

    return 0;
    
}