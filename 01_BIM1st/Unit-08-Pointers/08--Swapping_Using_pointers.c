#include<stdio.h>

int main(){

    int a = 13;
    int b = 7;

    int *p, *q, temp;

    p = &a;
    q = &b;

    printf("Before Swapping: %d %d", *p, *q);

    temp = *p;
    *p = *q;
    *q = temp;

    printf("\nAfter Swapping: %d %d", *p, *q);

    return 0;
}