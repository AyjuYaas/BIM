/* Sum of 1st 20 odd numbers */

#include<stdio.h>

int add_odd(int, int);

int main(){

    int a = 0, term = 5, sum;

    sum = add_odd(a, term);

    printf("The sum of 1st 20 odd number = %d", sum);

    return 0;
}

int add_odd(int a, int term){
    if (term == 0){
        return 0;
    }
    if((a%2)!=0){
        return (a + add_odd((a+2), (term-1)));
    }
    else{
        return(add_odd((a+1), term));
    }

}