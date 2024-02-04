#include<stdio.h>
void dis(int x[], int);
void add(int x[], int);

int main(){
    int n, i;
    printf("\nEnter the number of elements you want in a array: ");
    scanf("%d", &n);
    int a[n];
    
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++){
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    dis(a, n);
    add(a, n);

    return 0;
}

void dis(int x[], int n){
    int i;
    printf("\nThe Elements Are: ");
    for(i=0; i<n; i++){
        printf("%d\t", x[i]);
    }
}

void add(int x[], int n){
    int i, sum = 0;
    for (i=0; i<n; i++){
        sum += x[i];
    }
    printf("\nTheir Sum is: %d", sum);
}
