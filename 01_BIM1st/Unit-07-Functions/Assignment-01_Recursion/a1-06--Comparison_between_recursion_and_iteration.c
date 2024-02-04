#include<stdio.h>

int ite(int);

int main(){

    int i, a = 5, fact = 1;

    int fact1 = ite(a);

    for(i=1; i<=a; i++){
        fact *= i;
    }

    printf("Factorial Using Iteration = %d\n", fact);
    printf("Factorial using Recursion = %d", fact1);

    return 0;
}

int ite(int a){

    if (a==0){
        return 1;
    }
    else{
        return (a * ite(a-1));
    }
}
