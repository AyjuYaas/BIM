#include<stdio.h>

int main(){

    int a, i, count = 0;

    printf("\nEnter a number: ");
    scanf("%d", &a);

    for(i=1; i<=a; i++){
        if(a%i==0){
            count++;
        }
    }
    if(count == 2){
        printf("It is a Prime Number");
    }
    else{
        printf("It is Not a Prime Number");
    }

    return 0;
}