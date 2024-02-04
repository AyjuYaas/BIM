#include<stdio.h>

void add(int, int);

int main(){

    int a, b;
    printf("Enter the 1st Number: ");
    scanf("%d", &a);

    printf("Enter the 2nd Number: ");
    scanf("%d", &b);

    add(a, 12);

    int sub = a - b;

    return 0;
}

void add(int a, int b){

    int sum = a+b;

    printf("The sum = %d", sum);
    
}