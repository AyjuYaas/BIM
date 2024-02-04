/* Small among n integers using array */

#include<stdio.h>

int main(){
    int n, small, i, j;

    printf ("Number of values to be entered? => ");
    scanf ("%d", &n);

    /***** Getting the values *****/
    int a[n];

    printf ("Enter the Numbers:\n");
    for (i=0; i<n; i++){
        printf ("%d) ", i+1);
        scanf ("%d", &a[i]);
    }
    /*##############################*/

    /***** Smallest Finding *****/
    small = a[0];
    
    for (j=1; j<n; j++){
        if (small > a[j]){
            small = a[j];
        }
    }
    /*###############################*/

    printf ("\n%d is the smallest", small);

    return 0;
}