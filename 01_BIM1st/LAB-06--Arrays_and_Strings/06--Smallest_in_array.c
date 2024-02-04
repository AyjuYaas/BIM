#include<stdio.h>

int main(){
    int n, small, i;

    printf ("\nNumber of values to be entered? => ");
    scanf ("%d", &n);

    int a[n];
    printf ("Enter the Numbers:\n");
    for (i=0; i<n; i++){
        printf ("%d. ", i+1);
        scanf ("%d", &a[i]);
    }

    small = a[0];
    for (i=1; i<n; i++){
        if (small > a[i]){
            small = a[i];
        }
    }

    printf ("\n%d is the smallest", small);

    return 0;
}