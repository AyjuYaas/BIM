#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, *ptr, i, j, flag, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int*)calloc(n, sizeof(int));

    printf("Enter the elements\n");
    for(i=0; i<n; i++){
        printf("%d. ", i+1);
        scanf("%d", ptr+i);
    }
    do{
        flag = 0;
        for(i=0; i<(n-1); i++){
            j = i+1;
            if(*(ptr+i) < *(ptr+j)){
                temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
                flag = 1;
            }
        }
    }while (flag==1);

    printf("The Descending Order\n");
    for(i=0; i<n; i++){
        printf("%d\t", *(ptr+i));
    }
    return 0;
}