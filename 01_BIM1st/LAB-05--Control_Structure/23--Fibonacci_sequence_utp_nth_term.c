#include<stdio.h>

int main(){

    int a=0, b=1, c, n, count = 0;

    printf("\nEnter the Number of terms in the sequence: ");
    scanf("%d", &n);

    printf("\nThe Sequence is:\n");
    while(count != n){
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
        count++;
    }

    return 0;
}