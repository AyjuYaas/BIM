#include<stdio.h>

void great(int x[], int);

int main(){

    int n, i;

    printf ("\nEnter the number of elements: ");
    scanf("%d", &n);
    int a[n];

    printf ("Enter the elements:\n");
    for(i=0; i<n; i++){
        printf("In Position A[%d]: ", i);
        scanf("%d", &a[i]);
    }

    great(a, n);
    return 0;
}

void great(int x[], int n){
    int i, big = x[0];

    for(i=1; i<n; i++){
        if(big<x[i]){
            big = x[i];
        }
    }

    printf("\nThe Greatest Number = %d", big);
}