#include<stdio.h>

int main(){

    float num = 13.5;
    float *point; //Pointer stores address as well as value so float

    point = &num;

    printf("It's Address is %d", point); //But the address is integer so %d is used
    printf("\nIt's Value is %f", *point); //The value is float so %f

    return 0;
}