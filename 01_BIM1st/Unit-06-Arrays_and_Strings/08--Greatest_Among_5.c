/* Greatest Among % */

#include<stdio.h>

int main(){

    int i;
    int a[5] = {12, 13, 454, 34, 89};
    
    int large = a[0];

    for (i=1; i<5; i++){
        if (large<a[i]){
            large = a[i];
        }
    }

    printf ("The Largest Number is: %d", large);

    return 0;
}