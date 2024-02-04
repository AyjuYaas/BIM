#include<stdio.h>

int main(){
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int i, j;

    printf("Position\tValue\tAddress\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("A[%d][%d]\t\t%d\t%d\n", i, j, *(*(a+i)+j), *(a+i)+j); 
        }
    }

    return 0;
}