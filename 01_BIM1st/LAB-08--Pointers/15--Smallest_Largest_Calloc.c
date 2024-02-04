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

    int small = *ptr, big = *ptr;
    for(i=1; i<n; i++){
        if(small > *(ptr+i)){
            small = *(ptr+i);
        }
        if(big < *(ptr+i)){
            big = *(ptr+i);
        }
    }

    printf("Smallest Number = %d\nLargest Number = %d", small, big);
    
    return 0;
}