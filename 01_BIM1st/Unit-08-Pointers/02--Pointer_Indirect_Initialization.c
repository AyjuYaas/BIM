#include<stdio.h>

int main(){

    int num = 13;
    int *point;

    point = &num; //This is indiect initialization

    printf("The address of num = %d", point);

    return 0;
}