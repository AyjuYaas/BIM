#include<stdio.h>

void check(int);

int main(){

    int a[10], i;

    for (i=0; i<10; i++){
        a[i] = i+1;
        check(a[i]);
    }

}

void check(int a){

    if (a%2==0){
        printf("\n%d is Even", a);
    }

    else{
        printf("\n%d is Odd", a);
    }
}