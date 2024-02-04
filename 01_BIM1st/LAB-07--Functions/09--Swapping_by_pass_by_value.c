#include<stdio.h>
void swap(int, int);

int main(){
    int a, b;
    printf("\nEnter the two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore Swapping: %d %d", a, b);
    swap(a, b);
    return 0;
}

void swap(int x, int y){
    int temp = y;
    y = x;
    x = temp;
    printf("\nAfter Swapping: %d %d", x, y);
}