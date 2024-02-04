#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, *ptr, i, j, k, flag, small, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int*)calloc(n, sizeof(int));

    printf("Enter the elements\n");
    for(i=0; i<n; i++){
        printf("%d. ", i+1);
        scanf("%d", ptr+i);
    }

    for(i=0; i<(n-1); i++){
        flag = 0;
        small = *(ptr+i);
        for(j=(i+1); j<=(n-1); j++){
            if(small > *(ptr+j)){
                small = *(ptr+j);
                flag = 1;
                k = j;
            }
        }

        if(flag==1){
            temp = *(ptr+i);
            *(ptr+i) = small;
            *(ptr+k) = temp;
        }
    }

    printf("The Ascending Order is\n");
    for(i=0; i<n; i++){
        printf("%d\t", *(ptr+i));
    }

    return 0;
}