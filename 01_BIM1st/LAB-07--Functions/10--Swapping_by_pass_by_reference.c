#include<stdio.h>
void swap(int *, int *);

int main(){
    int a, b;
    printf("\nEnter the two values: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore Swapping: %d %d", a, b);
    swap(&a, &b);
    printf("\nAfter Swapping: %d %d", a, b);

    return 0;
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}