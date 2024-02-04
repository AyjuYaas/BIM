#include<stdio.h>

int main(){
    int a[5] = {4, 8, 3, 12, 5};
    int i, j, k, m, temp, small, flag;

    for (j = 0; j < 4; j++){

        small = a[j];
        flag = 0;
            
        for (i=(j+1); i<=4; i++){
            
            if (small>a[i]){
                small = a[i];
                k = i;
                flag = 1;
            }
 
        }

        if (flag == 1){
            temp = a[j];
            a[j] = small;
            a[k] = temp;
        }
             
    }

    for (m = 0; m<=4; m++){
        printf ("%d\t", a[m]);
    }

    return 0;
}