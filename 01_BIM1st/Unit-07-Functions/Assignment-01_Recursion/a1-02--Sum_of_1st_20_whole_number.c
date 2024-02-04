/* Sum of 1st 20 whole number using recursion */

#include<stdio.h>

int add(int);

int main(){

    int a = 20;

    int sum = add(a);

    printf("The sum of 1st 20 whole number = %d", sum);

    return 0;

}

int add(int a){

    if(a==0){
        return 0;
    }
    else{
        return(a+add(a-1));
    }
}