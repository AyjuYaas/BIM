#include<stdio.h>

int main(){

    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int i, j;

    printf("\nThe Matrix:\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n[i][j]\t &arr[i][j]\t *(arr+i)+j\t arr[i][j]\t *(*(arr+i)+j)\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("[%d][%d]\t %d\t %d\t  %d\t\t\t%d\n", i, j, &arr[i][j], *(arr+i)+j, arr[i][j], *(*(arr+i)+j));
        }
        printf("\n");
    }

    return 0;
}   