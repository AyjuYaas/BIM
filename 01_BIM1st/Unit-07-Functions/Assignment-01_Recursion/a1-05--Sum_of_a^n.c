#include<stdio.h>
#include<math.h>

int power(int, int);

int main(){

    int a, n;

    printf("This Program calulates the sum of series a^1 + a^2 + .... + a^n\n");
    printf("ENter the value for a: ");
    scanf("%d", &a);

    printf("Enter the value for n: ");
    scanf("%d", &n);

    int sum = power(a,n);

    printf("Sum = %d", sum);

    return 0;
}

int power(int a, int n){

    if(n == 0){
        return 0;
    }
    else{
        return(pow(a,n) + power(a, (n-1)));
    }
}