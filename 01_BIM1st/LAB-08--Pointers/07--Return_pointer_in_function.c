#include<stdio.h>
int* sum(int, int);

int main(){
    int a = 10, b = 20, *p;

    p = sum(a, b);
    printf("Their Sum = %d", *p);
    return 0;
}

int *sum(int x, int y){
    
    int add, *p;
    add = x + y;
    p = &add;

    return p;
}