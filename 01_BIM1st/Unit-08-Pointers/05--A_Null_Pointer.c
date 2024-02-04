#include<stdio.h>

int main(){

    int *point = 0;

    if(point == NULL){
        printf("Value Not Pointing Anywhere, %d", point);
    }

    return 0;
}