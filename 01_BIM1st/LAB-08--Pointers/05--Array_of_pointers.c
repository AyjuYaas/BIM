#include<stdio.h>

int main(){
    int i, *p[10], a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(i=0; i<10; i++){
        p[i] = &a[i];
    }

    printf("The Elements of the Array Along with their addresses are:\n");
    printf("Position\tValue\t  Address\n");
    for (i=0; i<10; i++){
        printf("a[%d]\t\t%d\t %d\n", i, *p[i], p[i]);
    }

    return 0;
}