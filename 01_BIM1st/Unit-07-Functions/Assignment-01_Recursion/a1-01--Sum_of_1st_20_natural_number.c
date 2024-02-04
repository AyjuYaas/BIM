/* Recursion Assig1 sum of 20 natural numbers */
#include<stdio.h>
int add(int);

int main(){

    int a = 3;

    int sum = add(a);

    printf("Sum of 1st 20 natural number = %d", sum);

    return 0;
}

int add(int a){

    if (a==1){
        return 1;
    }
    else{
        return (a + add(a-1)); 
    }

}