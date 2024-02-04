/* Bubble sorting Decending on self declared variable */

#include<stdio.h>

int main(){

    int a[7] = {1, 33, 231, 44, 678, 55, 9};

    int i, j, temp, flag;

    do{

        flag = 0;

        for (i=0; i<6; i++){
            j = i+1;

            if (a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;

                flag = 1;
            }
        }
    } while (flag == 1);

    printf ("The descending order:\n");
    for (i=0; i<7; i++){
        printf ("%d ", a[i]);
    }

    return 0;
}