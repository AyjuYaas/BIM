#include<stdio.h>

void increase(int*);

int main(){
    int a = 13;
    int *ptr = &a;

    printf("Before Function Call");
    printf("\nAddress of a = %d", ptr);
    printf("\nValue of a = %d\n", a);

    increase(ptr);

    printf("\nAfter Function Call");
    printf("\nAddress of a = %d", ptr);
    printf("\nValue of a = %d", a);

    return 0;
}

void increase(int *p){
    *p = *p + 1;
}