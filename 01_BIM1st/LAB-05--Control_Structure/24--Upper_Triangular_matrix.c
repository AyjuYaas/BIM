#include<stdio.h>
void matrix(int, int);

int main(){

    int a = 1, b = 0;

    matrix(a, b);

    return 0;
}

void matrix(int a, int b){

    int i, j, k;

    printf("\nThe upper Triangular Matrix is:\n");
    for(i=3; i>=1; i--){

        for(k=3; k>i; k--){
            printf("%d ", b);
        }
        for(j=1; j<=i; j++){
            printf("%d ", a);
        }
        printf("\n");
    
    }

}