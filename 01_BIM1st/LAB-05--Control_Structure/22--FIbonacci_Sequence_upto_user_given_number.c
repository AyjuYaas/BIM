#include<stdio.h>

int main(){

    int a = 0, b = 1, n, c;

    printf("\nEnter the number upto which the sequence should be shown: ");
    scanf("%d", &n);

    printf("\nThe Sequence:\n");
    while (a <= n){
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}