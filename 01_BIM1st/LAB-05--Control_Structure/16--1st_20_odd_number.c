#include<stdio.h>

int main(){

    int a=1, count = 0;

    printf("\nThe 1st 20 odd numbers Are:\n");
    do{
        if(a%2!=0){
            printf("%d ", a);
            count++;
        }
        a += 1;
    } while(count<20);
    
    return 0;
}