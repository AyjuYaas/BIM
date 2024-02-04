#include<stdio.h>
#define AND &&
#define OR ||
#define NOT !

int main(){

    int a = 1, b=1, c=0;
    printf("\na = %d, b = %d, c = %d\n", a, b, c);

    printf("\na.b = %d", (a AND b));
    printf("\na.c = %d\n", (a AND c));

    printf("\na+b = %d", (a OR b));
    printf("\na+c = %d\n", (a OR c));

    printf("\na' = %d", (NOT a));
    printf("\nc' = %d", (NOT c));

    return 0;
}
