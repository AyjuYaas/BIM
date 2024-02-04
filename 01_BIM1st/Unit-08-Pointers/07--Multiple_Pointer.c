#include<stdio.h>

int main(){

    int *p, **q, ***r;
    int num = 22;

    p = &num;
    q = &p;
    r = &q;

    printf("\nPointer P address of num: %d\n", p);
    printf("Pointer P Value: %d\n\n", *p);

    printf("Pointer Q address of P: %d\n", q);
    printf("Pointer Q value of P: %d\n", *q);
    printf("Pointer Q Original value that P contains: %d\n\n", **q);

    printf("Pointer R address of Q: %d\n", r);
    printf("Pointer R value of Q: %d\n", *r);
    printf("Pointer R value that Q is pointing(aka P value): %d\n", **r);
    printf("Pointer R Original value that P contains: %d", ***r);

    return 0;
}