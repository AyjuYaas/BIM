#include<stdio.h>

long long fact(long long n);

int main(){
    long long n;

    printf("Enter the number: ");
    scanf("%lld", &n);

    printf("The factorial is: %lld", fact(n));

    return 0; 
}

long long fact(long long n){
    if(n==0){
        return 1;
    }
    else{
        return (n*fact(n-1));
    }
}