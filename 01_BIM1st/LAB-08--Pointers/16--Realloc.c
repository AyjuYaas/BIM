#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr, n, i;
    ptr = (int*)calloc(3, sizeof(int));

    printf("\nEnter the number of elements you want: ");
    scanf("%d", &n);

    if(n > 3){
        ptr = realloc(ptr, n);
    }

    printf("ENter the elements:\n");
    for(i=0; i<n; i++){
        printf("%d. ", i+1);
        scanf("%d", ptr+i);
    }

    printf("The Elements:\n");
    for(i=0; i<n; i++){
        printf("%d\t", *(ptr+i));
    }

    return 0;
}