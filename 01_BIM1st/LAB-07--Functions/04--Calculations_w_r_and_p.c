#include<stdio.h>
int add(int, int), sub(int, int), mul(int, int);
float div(int, int);

int main(){
    int x, y;
    printf ("\nEnter Two Numbers\n");
    scanf("%d %d", &x, &y);

    printf("\nSum = %d", add(x, y));
    printf("\nDifference = %d", sub(x, y));
    printf("\nProduct = %d", mul(x, y));
    printf("\nQuotoent = %.2f", div(x, y));

    return 0;
}

int add(int a, int b){
    return (a+b);
}
int sub(int a, int b){
    return (a-b);
}
int mul(int a, int b){
    return (a*b);
}
float div(int a, int b){
    float q = (float)a/(float)b;
    return q;
}