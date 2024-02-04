#include<stdio.h>

float div(int, int);

int main(){

    int a, b;
    float pro;

    printf("Enter the Two values to be divided:\n");
    scanf("%d %d", &a, &b);

    pro = div(a, b);

    printf ("The Quotient = %.2f", pro);

    return 0;

}

float div(int x, int y){

    float div = (float)x/(float)y;

    return div;

}