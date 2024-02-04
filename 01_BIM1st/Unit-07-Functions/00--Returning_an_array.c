// Return an Array
#include<stdio.h>
int * star();

int main(){
    int *p, i;

    p = star();
    for(i=0; i<5; i++){
        printf("\nValues = %d", *(p+i));
    }
    return 0;
}

int * star(){
    static int x[5];
    int a = 12;
    int i;
    
    for (i=0; i<5; i++){
        x[i] = a+i;
    }

    return x;
}