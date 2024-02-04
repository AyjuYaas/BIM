#include<stdio.h>

void increase();

int main(){

    increase();
    increase();
    increase();
    increase();
    increase();

    return 0;
}

void increase(){

    static int a = 1; //Original Value doesn't refresh on each call
                     //WORKS like global variable

    printf("%d ", a);

    a+=1;
}