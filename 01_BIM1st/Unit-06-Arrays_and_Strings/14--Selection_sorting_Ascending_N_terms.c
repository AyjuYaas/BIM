/* Unsorted to sorted n times array */

#include<stdio.h>

int main(){

    int n, i, j, k, p, l, small, flag, temp;

    printf ("Enter the number of Elements in the array: ");
    scanf ("%d", &n);
    int a[n];

    printf ("Enter the elements:\n");
    for (i=0; i<n; i++){
        printf ("%d. ", i+1);
        scanf ("%d", &a[i]);
    }

    for (j = 0; j<(n-1); j++){
        small = a[j];
        flag = 0;

        for (k=(j+1); k<=(n-1); k++){
            if (small>a[k]){
                small = a[k];
                p = k;
                flag = 1;
            }
        }

        if (flag == 1){
            temp = a[j];
            a[j] = small;
            a[p] = temp;
        }
    }

    printf ("Ascending Order:\n");
    for (l=0; l<n; l++){
        printf ("%d  ", a[l]);
    }

    return 0;
}