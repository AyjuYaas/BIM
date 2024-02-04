#include<stdio.h>
int main(){
    int a[10] = {11, 22, 32, 55, 69, 77, 88, 90, 101, 269};
    int i, *p;
    p = a;
    
    printf("Position\tValue\t\tAddress\n");
    for (i=0; i<10; i++){
        printf("a[%d]\t\t%d\t %d\n", i, *(p+i), (p+i));
    }

    return 0;
}