/* Bubble sorting Ascending N terms */

#include<stdio.h>

int main(){

    int n, i, j, k, l, temp, flag;

    printf ("Enter the number of terms: ");
    scanf ("%d", &n);
    int a[n];

    printf ("Enter the %d item/s:\n", n);
    for (i=0; i<n; i++){
        printf ("%d. ", i+1);
        scanf ("%d", &a[i]);
    }

    do{
        flag = 0;

        for (j=0; j<(n-1); j++){
            
            k = j+1;
            if (a[j]>a[k]){
                temp = a [j];
                a[j] = a[k];
                a[k] = temp;
                
                flag = 1;

            }
        
        }
    
    } while (flag == 1);

    printf ("The ascending order:\n");
    for (l = 0; l<n; l++){
        printf ("%d  ", a[l]);
    }

    return 0;
}