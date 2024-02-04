#include<stdio.h>
void swap(int, int);

int main(){

    int a, b;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    swap(a, b);

    printf("\n\nValue in the calling function\n");
    printf("a is %d\ty is %d", a, b);

    return 0;
}

void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;

    printf("\nAfter Swapping:");
    printf("\nIn Called Function:\n");
    printf("a is %d\ty is %d", x, y);

}