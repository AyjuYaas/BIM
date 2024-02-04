#include<stdio.h>

int main(){
    int num = 13;

    int *p, **q;

    p = &num;
    q = &p;

    printf("\nThe Address of P = %d\nIt's Value = %d\n", p, *p);
    printf("\nThe Address of q = %d\nIt's Value of p = %d", q, *q);
    printf("\nIt's Original Value = %d", **q);
    //p stores address of num
    //*p points to value of num
    //q stores address of p
    //*q displays the address of p
    //**q points to value of p aka num
    return 0;
}