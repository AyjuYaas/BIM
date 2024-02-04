#include<stdio.h>

int main(){
    int a, b;
    int *p, *q;
    printf("Enter two Values: ");
    scanf("%d %d", &a, &b);

    p = &a;
    q = &b;
    printf("\nBefore Swapping\n");
    printf("Value and address of a: %d, %d\n", a, p);
    printf("Value and address of b: %d, %d\n", b, q);

    int temp = *p;
    *p = *q;
    *q = temp;

    printf("\nAfter Swapping\n");
    printf("Value and address of a: %d, %d\n", a, p);
    printf("Value and address of b: %d, %d", b, q);

    return 0;
}