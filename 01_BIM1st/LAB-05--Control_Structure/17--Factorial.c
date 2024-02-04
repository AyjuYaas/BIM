#include<stdio.h>

int main(){
    int a, i, fact = 1;

    printf("\nEnter a number: ");
    scanf("%d", &a);
    
    for(i=1; i<=a; i++){
        fact = fact * i;
    }

    printf("Factorial of %d = %d", a, fact);

    return 0;
}