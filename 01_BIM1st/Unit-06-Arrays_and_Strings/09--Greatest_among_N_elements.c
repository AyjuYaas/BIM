/* Largest among n elements */

#include<stdio.h>

int main(){

    int i, n, j, large;

    printf ("Enter the number of elements you want: ");
    scanf ("%d", &n);
    int a[n];

    printf ("Enter the Numbers:\n");
    for (i=0; i<n; i++){
        printf ("%d. ", i+1);
        scanf ("%d", &a[i]);
    }

    large = a[0];
    for (j = 1; j<n; j++){
        if (large < a[j]){
            large = a[j];
        }
    }

    printf ("The Largest element: %d", large);

    return 0;
}