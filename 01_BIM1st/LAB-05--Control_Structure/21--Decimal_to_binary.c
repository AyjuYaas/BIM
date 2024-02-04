#include<stdio.h>
#include<math.h>

int main(){

    int dec, bin = 0, rem, k = 1;

    printf("\nEnter a decimal Nmber: ");
    scanf("%d", &dec);

    while (dec != 0){
        rem = dec%2;
        bin = rem * pow(10, k) + bin;
        k++;
        dec = dec/2;
    }
    
    printf("\nThe Binary form = %d", bin);

    return 0;
} 