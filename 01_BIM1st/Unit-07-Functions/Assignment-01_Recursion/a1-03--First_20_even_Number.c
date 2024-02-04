/* 1st 20 even numbers */

#include<stdio.h>

int check(int, int);

int main(){

    int a = 1, term = 20;

    check(a, term);

    return 0;
}

int check(int a, int term){
    if (term == 0){
        return 0;
    }
    if(a%2==0){
        printf("%d ", a);
        return (check((a+2), (term-1)));
    }
    else{
        return(check((a+1), term));
    }
    
}