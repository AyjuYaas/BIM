#include<stdio.h>
void copy(int x[], int);

int main(){
    int n, i;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements:\n");
    for(i=0; i<n; i++){
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    copy(a, n);
    return 0;
}

void copy(int x[], int n){
    int i, x1[n];
    for(i=0; i<n; i++){
        x1[i] = x[i];
    }

    printf("\nCopy Successful! The elements of copied array\n");
    for(i=0; i<n; i++){
        printf("%d\t", x1[i]);
    }
}