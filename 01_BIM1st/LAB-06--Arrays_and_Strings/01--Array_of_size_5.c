#include<stdio.h>

int main(){
    int i, a[5];
    printf("\nEnter the elements for arrays on position:\n");
    for(i=0; i<5; i++){
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nThe Elements Are:\n");
    for(i=0; i<5; i++){
        printf("%d ", a[i]);
    }

    return 0;
}