#include<stdio.h>

int primeCheck(int no){
    int i;
    if(no<2){
        return 0;
    }
    for(i=2; i<=(no/2); i++){
        if (no % i == 0){
            return 0;
        }
    }
    return 1;
}

void main(){
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);

    if(primeCheck(n) == 1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}