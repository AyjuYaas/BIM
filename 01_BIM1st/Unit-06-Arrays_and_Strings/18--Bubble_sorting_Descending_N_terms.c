/* Bubble sorting descending in N array */

#include<stdio.h>

int main(){

    int n, i, j, flag, temp;

    printf ("Enter the number of terms: ");
    scanf ("%d", &n);
    int a[n];

    printf ("Enter the %d item/s\n", n);
    for (i=0; i<n; i++){
        printf ("%d. ", i+1);
        scanf ("%d",&a[i]);
    }

    do{
        flag = 0;

        for (i=0; i<(n-1); i++){

            j = i + 1;
            if (a[i]<a[j]){

                temp = a[i];
                a[i] = a[j];
                a[j] = temp;

                flag = 1;

            }
            
        }

    } while(flag == 1);

    printf ("Descending order is:\n");
    for (i=0; i<n; i++){
        printf ("%d ", a[i]);
    }

    return 0;
}