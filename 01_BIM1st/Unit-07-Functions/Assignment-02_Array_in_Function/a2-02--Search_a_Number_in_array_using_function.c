#include<stdio.h>

void arr_pass(int x[], int);

int main(){
    
    int arr[10] = {1, 22, 32, 43, 11, 9, 99, 23, 66, 69};
    int che;

    printf("Enter a number to be searched: ");
    scanf("%d", &che);

    arr_pass(arr, che);

    return 0;

}

void arr_pass(int x[], int che){

    int i, flag = 0;

    for(i=0; i<10; i++){
        if (x[i]==che){
            printf("\nIt is on the list in position a[%d]", i);
            flag++;
        }   
    }

    if(flag==0){
        printf("\nNot found on the list");
    }

}