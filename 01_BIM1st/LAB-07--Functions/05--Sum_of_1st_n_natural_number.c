#include<stdio.h>
int re(int);

int main(){
    int n, sum;
    printf("\nEnter the nth term: ");
    scanf("%d", &n);

    sum = re(n);
    printf("The Sum = %d", sum);
    return 0;
}

int re(int x){
    if (x == 1){
        return 1;
    }
    else{
        return (x + re(x-1));
    }
}