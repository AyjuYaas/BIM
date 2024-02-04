#include<stdio.h>

int main(){

    int *p[5];

    int a[5] = {1, 2, 3, 4, 5};

    int i;
    for(i=0; i<5; i++){
        p[i] = &a[i];
    }

    printf("The Addresses and Values:\n");
    for(i=0; i<5; i++){
        printf("Address and Value of p[%d]: %d; %d\n", i, p[i], *p[i]);
    }

    return 0;

}