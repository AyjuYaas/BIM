/* Required Info For 11, The Rewind Function */

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *f;
    int a = 87;
    int b;

    f = fopen("11-1--rhello.txt", "w+");
    fprintf(f, "%d", a);

    rewind(f);
    fscanf(f, "%d", &b);
    printf("Number: %d", b);

    return 0;
}