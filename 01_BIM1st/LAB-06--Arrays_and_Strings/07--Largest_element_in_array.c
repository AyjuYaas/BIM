/* Largest among n elements */

#include<stdio.h>

int main(){

    int i, n, large;

    printf ("\nEnter the number of elements you want: ");
    scanf ("%d", &n);
    int a[n];

    printf ("Enter the Numbers:\n");
    for (i=0; i<n; i++){
        printf ("%d. ", i+1);
        scanf ("%d", &a[i]);
    }

    large = a[0];
    for (i = 1; i<n; i++){
        if (large < a[i]){
            large = a[i];
        }
    }

    printf ("The Largest element: %d", large);

    return 0;
}