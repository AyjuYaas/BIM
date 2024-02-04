#include<stdio.h>

void swap(int*, int*);

int main(){

    int a, b;

    printf("Enter the two vakues:\n");
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("\n\nValue in calling FUnction:\n");
    printf("a = %d, b = %d", a, b);

    return 0;
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;

    printf("\nAfter Swapping:\n");
    printf("\nValue in Called function:\n");
    printf("a = %d, b = %d", *x, *y);

}