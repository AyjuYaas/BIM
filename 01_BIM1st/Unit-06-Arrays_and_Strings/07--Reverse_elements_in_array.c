/* Reverse Elements in array */

#include<stdio.h>

int main(){

    int n, i, j;

    /* Getting Part */
    printf ("Enter the number of elements you want: ");
    scanf ("%d", &n);
    int a[n];

    printf ("\nEnter the numbers:\n");
    for (i=0; i<n; i++){
        printf ("%d. ", i+1);
        scanf ("%d", &a[i]);
    }
/*#################################################################*/

    printf ("\n");

/* Printing in reverse order */
    printf ("Reversed Format:\n");
    for (j = n-1; j>=0; j--){
        printf ("%d\n", a[j]);
    }
/*################################################################*/

    return 0;
}
