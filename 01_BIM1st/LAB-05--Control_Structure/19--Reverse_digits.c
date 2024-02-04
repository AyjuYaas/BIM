#include<stdio.h>

int main(){

    int a, rem, rev = 0;

    printf("\nEnter a number: ");
    scanf("%d", &a);

    while (a != 0){
        rem = a%10;
        rev = rev*10 + rem;
        a = a/10;
    }

    printf("The Reverse of given Number: %d", rev);
    return 0;
}