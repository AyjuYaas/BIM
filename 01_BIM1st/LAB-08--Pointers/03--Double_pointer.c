#include<stdio.h>
int main(){
    int a = 5;
    int *p, **q;

    p = &a;
    q = &p;

    printf("The Integer Value: %d", **q);
    printf("\nThe Address of the Value: %d", *q);
    printf("\nThe Address of the 1st pointer: %d", q);

    return 0;
}