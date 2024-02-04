#include<stdio.h>

void increase();
void decrease();

int a;//Extern Memory

int main(){
    
    printf("Initialized Value of a = %d\n", a);
    increase();
    increase();
    decrease();
    decrease();

    printf("\nValue After Calling End a = %d\n", a);

    return 0;

}

void increase(){
    a++;
    printf("\nIn increased Fn a = %d", a);

}

void decrease(){
    --a;
    printf ("\nIn Decreased Fn a = %d", a);
}
