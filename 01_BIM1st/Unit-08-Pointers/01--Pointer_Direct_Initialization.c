#include<stdio.h>

int main(){

    int tisha_gangan = 65;

    int *point = &tisha_gangan; //This is direct initialization

    printf("Address of num is %d", point);
    printf("\nValue of num = %d", *point);

    return 0;

}