/* Bubble Sorting Ascending */

#include<stdio.h>

int main(){
    
    int a[5] = {111, 222, 33, 4, 7};
    int i, j, k, temp, flag;

    do{
        flag = 0;

        for (i=0; i<4; i++){
            j = i+1;

            if (a[i]> a[j]){
                
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;

                flag = 1;
            }
        }

    } while (flag == 1);

    printf ("Ascending order:\n");
    for (k=0; k<=4; k++){
        printf ("%d ", a[k]);
    }

    return 0;
}