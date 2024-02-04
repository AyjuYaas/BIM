#include<stdio.h>

int fib(int);
int n;

int main(){

    int i = 0, f;

    printf("Enter the end value of series: ");
    scanf("%d", &n);

    while(fib(i) <= n){
        printf("%d ", fib(i));
        i++;
    }

    return 0;
}

int fib(int a){
    if (a==0){
        return 0;
    }
    else if (a==1){
        return 1;
    }
    else{
        return(fib(a-1)+fib(a-2));
    }
}