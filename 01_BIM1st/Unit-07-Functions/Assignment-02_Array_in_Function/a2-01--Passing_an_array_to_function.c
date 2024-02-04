#include<stdio.h>

void arr_pass(int a[]);

int main(){

    int a[5] = {1, 2, 3, 4, 5};

    arr_pass(a);

    return 0;

}

void arr_pass(int a[]){

    int i;

    printf("In the called Function:\n");
    for (i=0; i<5; i++){
        printf("%d ", a[i]);
    }
    
}