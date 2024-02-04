#include<stdio.h>

int main(){

    int num = 23;

    int *point = &num; //This * is known as REFERENCING

    printf("The address is = %d", point);
    printf("\nThe Value = %d", *point); //This * is known as DEREFERENCING

    return 0;
}