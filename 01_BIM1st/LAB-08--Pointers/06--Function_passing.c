#include<stdio.h>
void increase(int *);

int main(){
    int a = 10, *p;
    p = &a;

    printf("Before Calling: %d", a);
    increase(p);
    printf("\nAfter Calling: %d", a);
    return 0;

}

void increase(int *x){
    *x += 10;
}