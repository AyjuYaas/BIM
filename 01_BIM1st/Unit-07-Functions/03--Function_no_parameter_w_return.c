#include<stdio.h>

int add();

int main(){

    int sum;

    sum = add();

    printf("Sum = %d", sum);
    return 0;
}

int add(){

    int x, y;

    printf("Enter the two Numbers: ");
    scanf("%d %d", &x, &y);

    int s = x + y;

    return s;
}