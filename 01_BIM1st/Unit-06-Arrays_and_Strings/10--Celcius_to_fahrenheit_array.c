#include<stdio.h>

int main(){

    int i, j;
    float fah[20];
    float cel[20] = {22, 234, 43, 123, 34, 133, 145, 0, -32, 180, 111, 12.3, 11, 43.3, 33.12, 32.7, 178, 156.3, 112.6, 90.3};

    for (i=0; i<20; i++){
        fah[i] = (cel[i]*(9.0/5.0)+32.0);

        printf ("%.2f cel = %.2f fah\n", cel[i], fah[i]);
    }

    return 0;
}