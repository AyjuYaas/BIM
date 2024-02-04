#include<stdio.h>
#include<stdlib.h>

void minMax(int *, int);

int main(){
    int n, i, *ptr;

    printf("Enter the number of elements in an array: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    for(i=0; i<n; i++){
        printf("Enter element for array index [%d]: ", i);
        scanf("%d", ptr+i);
    }

    minMax(ptr, n);

    free(ptr);

    return 0;
}

void minMax(int *p, int a){

    int min, max, j;

    min = *p;
    max = *p;

    for(j=1; j<a; j++){
        if (min > *(p+j)){
            min = *(p+j);
        }

        if (max < *(p+j)){
            max = *(p+j);
        }
    }

    printf("The Smallest Element: %d", min);
    printf("\nThe Greatest Element: %d", max);

}