#include<stdio.h>

int main(){

    int n, i, j, se, flag = 0;

    printf ("Enter the number of element you want in the array: ");
    scanf ("%d", &n);

    int a[n];

    printf ("Enter the values:\n");
    for(i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }

    printf ("Enter the value to be searched: ");
    scanf ("%d", &se);

    for (j=0; j<n; j++){
        if (se == a[j]){
            flag = 1;
            printf ("Yes it falls on position a[%d]", j); 
        }
    }

    if (flag == 0){
        printf ("Not on the list");
    }

    return 0;
}