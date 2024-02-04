#include<stdio.h>
int add(), sub(), mul();
float div();

int a, b;
int main(){
    printf ("\nEnter Two Numbers\n");
    scanf("%d %d", &a, &b);

    printf("\nSum = %d", add());
    printf("\nDifference = %d", sub());
    printf("\nProduct = %d", mul());
    printf("\nQuotoent = %.2f", div());

    return 0;
}

int add(){
    return (a+b);
}
int sub(){
    return (a-b);
}
int mul(){
    return (a*b);
}
float div(){
    float q = (float)a/(float)b;
    return q;
}