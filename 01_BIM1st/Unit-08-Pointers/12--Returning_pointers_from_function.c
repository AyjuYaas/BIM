#include<stdio.h>

int * element();

int main(){

    int *ptr;

    ptr = element();

    printf("The Element = %d", *ptr);

    return 0;
}

int * element(){

    static int m = 132;

    return (&m);
}