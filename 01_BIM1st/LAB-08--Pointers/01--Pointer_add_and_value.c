#include<stdio.h>
int main(){
    int a = 100;
    int *p;
    p = &a;

    printf("\nThe Address: %d", p);
    printf("\nIt's Value: %d", *p);

    return 0;
}