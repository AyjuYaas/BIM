#include<stdio.h>

int main(){

    int arr[5] = {1, 2, 3, 4, 5};

    int *ptr;

    ptr = &arr[0];

    printf("&arr[i] \tarr+i \t\tptr+i \t\tarr[i] \t*(arr+i) \t*(ptr+i) \n");

    int i;
    for(i=0; i<5; i++){
        printf("%d \t%d \t%d \t %d \t %d \t\t%d \n", &arr[i], (arr+i), (ptr+i), arr[i], *(arr+i), *(ptr+i));
    }

    return 0;
}