/* String Length Without using strlen */

#include<stdio.h>
int main(){

    char a[] = "Sayujya Satyal";

    int i = 0, count = 0;
    while(a[i] != '\0'){
        count++;
        i++;
    }

    printf("\nThe length of String = %d", count);

    return 0;
}
