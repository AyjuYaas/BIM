#include<stdio.h>

int series(int);

int main(){
    int n;

    printf("Enter the nth term: ");
    scanf("%d", &n);

    printf("The Sum is %d", series(n));

    return 0;

}

int series(int a){
    if (a==0){
        return 0;
    }

    else{
        return (a + series(a-1));
    }
}