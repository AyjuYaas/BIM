#include<stdio.h>

void increase();

int main(){
    int i;
    printf("\n");
    for(i=0; i<5; i++){
        increase();
    }
    return 0;
}

void increase(){

    static int a = 1; //Original Value doesn't refresh on each call
                     //WORKS like global variabl3
    printf("%d ", a);
    a+=1;
}