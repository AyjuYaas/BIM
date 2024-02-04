#include<stdio.h>
int fac(int);

int main(){
    int x;
    printf("\nEnter a number: ");
    scanf("%d", &x);

    int f = fac(x);
    printf("\nThe factorial is: %d", f);
    return 0;
}

int fac(int a){
    if (a==1){
        return 1;
    }
    else{
        return (a * fac(a-1));
    }
}