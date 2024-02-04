#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, *ptr, i;
    printf("\nEnter the number of integers you want: ");
    scanf("%d", &n);
    ptr = (int*)calloc(n, sizeof(int));

    printf("\nEnter the elements ypu want:\n");
    for(i=0; i<n; i++){
        printf("%d. ", i+1);
        scanf("%d", (ptr+i));
    }

    printf("The Elements:\n");
    for(i=0; i<n; i++){
        printf("%d\t", *(ptr+i));
    }

    return 0;
}