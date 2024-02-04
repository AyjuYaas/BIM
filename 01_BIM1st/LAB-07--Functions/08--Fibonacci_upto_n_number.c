// Recursion
#include<stdio.h>
int re(int);

int main(){
    int x, a = 0;
    printf("\nEnter the last term: ");
    scanf("%d", &x);

    do{
        printf("%d ", re(a));
        a++;
    }while (re(a) <= x);

    return 0;
}

int re(int x){
    if (x==0){
        return 0;
    }
    else if(x==1){
        return 1;
    }
    else{
        return (re(x-1) + re(x-2));
    }
}