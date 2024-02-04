/* Using calloc() to allocate to declare an display array */

#include<stdio.h>
#include<stdlib.h>

int main(){

    int n, i, *ptr;

    printf("Enter the number of elements in an array: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    for(i=0; i<n; i++){
        printf("Enter element of array index [%d]: ", i);
        scanf("%d", ptr+i);
    }

    printf("\nThe elements in the array  are:\n");

    for(i=0; i<n; i++){
        printf("%d\t", *(ptr+i));
    }

    free(ptr);
    return 0;
}