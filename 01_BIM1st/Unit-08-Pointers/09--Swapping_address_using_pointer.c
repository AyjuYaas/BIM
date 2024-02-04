#include<stdio.h>

int main(){
    int a = 13, b = 7;

    int *p, *q, *temp;
    p = &a;
    q = &b;

    printf("Before Swapping:\n");
    printf("Address And Value of A: %d; %d\n", p, *p);
    printf("Address And Value of B: %d; %d\n\n", q, *q);

    temp = p;
    p = q;
    q = temp;

    printf("After Swapping:\n");
    printf("Address And Value of A: %d; %d\n", p, *p);
    printf("Address And Value of B: %d; %d\n\n", q, *q);

    return 0;
}