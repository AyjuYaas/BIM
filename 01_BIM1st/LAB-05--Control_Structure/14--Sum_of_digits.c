#include<stdio.h>

int main(){

    int a;
    printf("\nEnter a multi-digit number: ");
    scanf("%d", &a);

    int rem, sum = 0;

    while(a != 0){
        rem = a%10;
        sum += rem;
        a = a/10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}