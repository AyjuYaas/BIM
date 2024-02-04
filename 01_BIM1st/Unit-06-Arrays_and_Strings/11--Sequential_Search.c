/** Sequential Search **/

#include<stdio.h>

int main(){

    int a[10] = {1, 2, 22, 32, 44, 12, 5, 56, 34, 21};    
    int i, n, flag=0;

    printf("Enter a number to be searched on the list: ");
    scanf ("%d", &n);

    for (i=0; i<10; i++){
        if (n == a[i]){
            printf ("\nIt is available on position a[%d]", i);
            flag = 1;
        }
    }

    if (flag == 0){
        printf ("\nNot availabe in the list");
    }

    return 0;
}